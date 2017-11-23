#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent):
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  tcpConnect();

  /*connect(ui->pushButtonG,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));*/

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

}

void MainWindow::connectIP(){
    MainWindow::getData();
}

void MainWindow::disconnectIP(){
    if(socket->state()!= QAbstractSocket::ConnectedState){
        socket->disconnectFromHost();
        ui->textEdit->insertPlainText("disconnect");
        qDebug() << "disconnected";
    }
}

void MainWindow::updatelist(){

}

void MainWindow::startdata(){
    if(timerId==0){
        timerId= startTimer(ui->horizontalSlider->value());
        qDebug() << "timer criado";
    } else {
        killTimer(timerId);
        timerId = startTimer(ui->horizontalSlider->value());
        qDebug() << "timer criado";
    }
}


void MainWindow::timerEvent(QTimerEvent * q){

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
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}

void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 5\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
