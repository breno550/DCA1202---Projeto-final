#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QEvent>
#include <iostream>

using namespace std;


MainWindow::MainWindow(QWidget *parent):
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  tcpConnect();

  connect(ui->pushButton_connect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(connectIP()));

  connect(ui->pushButton_disconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(disconnectIP()));

  connect(ui->pushButton_start,
          SIGNAL(clicked(bool)),
          this,
          SLOT(startdata()));

  connect(ui->pushButton_stop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stopdata()));

  connect(ui->pushButton_update,
          SIGNAL(clicked(bool)),
          this,
          SLOT(updatelist()));

  connect(ui->listWidget,
          SIGNAL(itemActivated(QListWidgetItem*)),
          this,
          SLOT(buttons()));

}

void MainWindow::buttons(){
    ui->pushButton_start->setEnabled(true);
    ui->pushButton_stop->setEnabled(true);
}

void MainWindow::connectIP(){
    tcpConnect();
    getList();
}

void MainWindow::disconnectIP(){
    if(socket->state()!= QAbstractSocket::ConnectedState){
        socket->disconnectFromHost();
        cout << "disconnected" << endl;
    }
    ui->listWidget->clear();
}

void MainWindow::updatelist(){
    ui->listWidget->clear();
    getList();
}

void MainWindow::getList(){
    QStringList items;
    QString str;
    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
            cout << "getting list" << endl;
            socket->write("list");
            socket->waitForBytesWritten(3000);
            socket->waitForReadyRead(3000);
            cout << socket->bytesAvailable() << "bytes avaiable" << endl;
            while(socket->bytesAvailable()){
                str = socket->readLine().replace("\r", "").replace("\n", "");
                items << str;
                //cout << str.toStdString()<<endl;
            }
        }
        ui->listWidget->addItems(items);
    }
}

void MainWindow::startdata(){
    if(timerId==0){
        timerId = startTimer(ui->horizontalSlider->value());
        cout << "timer criado" << endl;
        } else {
            killTimer(timerId);
            timerId = startTimer(ui->horizontalSlider->value());
            cout << "timer criado" << endl;
        }
}


void MainWindow::timerEvent(QTimerEvent * q){
    getData();
}

void MainWindow::stopdata(){
    if(timerId!=0){
        killTimer(timerId);
    }
}

void MainWindow::tcpConnect(){
  QString host_ip = ui->lineEditIP->text();
  socket->connectToHost(host_ip,1234);
  if(socket->waitForConnected(3000)){
    cout << "Connected" << endl;
  }
  else{
    cout << "Disconnected" << endl;
  }
}

void MainWindow::getData(){
    if(ui->listWidget->currentItem()->isSelected()){
        QString get_data = "get " + ui->listWidget->currentItem()->text() + " 30\r\n";
        QString resultado;
        QString str;
        QByteArray array;
        QStringList list;
        qint64 thetime;
        QVector<long double> cordenadas;
        QVector<long long> tempo;
        cordenadas.clear();
        tempo.clear();
        cout << "to get data..." << endl;
        if(socket->state() == QAbstractSocket::ConnectedState){
          if(socket->isOpen()){
            cout << "reading..." << endl;
            socket->write(get_data.toStdString().c_str());
            socket->waitForBytesWritten(3000);
            socket->waitForReadyRead(3000);
            cout << socket->bytesAvailable() << "bytes avaiable" << endl;
            while(socket->bytesAvailable()){
              str = socket->readLine().replace("\n","").replace("\r","");
              list = str.split(" ");
              if(list.size() == 2){
                bool ok;
                str = list.at(0);
                thetime = str.toDouble(&ok);
                str = list.at(1);
                resultado = QString::number(thetime);
                //cout << resultado.toStdString() << ": " << str.toStdString() << endl;
                cordenadas.push_back(str.toDouble());
                tempo.push_back(thetime);
              }
            }
                ui->widget->setCorde(cordenadas);
                ui->widget->setTemp(tempo);
          }
       }
    }
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}
