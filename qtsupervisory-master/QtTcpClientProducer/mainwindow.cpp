#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QEvent>


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  tcpConnect();

  connect(ui->pushButtonPut,
          SIGNAL(clicked(bool)),
          this,
          SLOT(startData()));

  connect(ui->pushButtonStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stopData()));

  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(connectIP()));

  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(disconnectIP()));

}

/*!
  * Se conecta a um ip
*/

void MainWindow::tcpConnect(){
  QString host_ip = ui->lineEditIp->text();
  QString str = "connected\r\n";
  socket->connectToHost(host_ip,1234);
  if(socket->waitForConnected(3000)){
    ui->listWidget->addItem(str);
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}

/*!
  * Envia uma string com a hora e um número randomico entre os valores das variaveis 'min' e 'max'
*/

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  int min, max;
  min = ui->horizontalSliderMin->value();
  max = ui->horizontalSliderMax->value();

  if(socket->state()== QAbstractSocket::ConnectedState){
    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " + QString::number(qrand()% (max - min) + min) + "\r\n";
    ui->listWidget->addItem(str);
      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
  }
}

/*!
  * Cria um timer, se não houver um ativo
*/

void MainWindow::startData(){
   if(timerId==0){
      timerId = startTimer(ui->horizontalSliderTimming->value());
      qDebug() << "timer criado";
   } else {
       killTimer(timerId);
       timerId = startTimer(ui->horizontalSliderTimming->value());
   }
}

/*!
  * Destroi o timer, se tiver ativo
*/

void MainWindow::stopData(){
    if(timerId!=0){
       killTimer(timerId);
    }
}

/*!
  * chama a função putData
*/

void MainWindow::timerEvent(QTimerEvent * q){
    putData();
}

/*!
  * Usa a função tcpConnect para se conectar
*/

void MainWindow::connectIP(){
   MainWindow::tcpConnect();
}

/*!
  *Fecha conexão com host
*/

void MainWindow::disconnectIP(){
    QString str = "Disconnected\r\n";
    if(socket->state()== QAbstractSocket::ConnectedState){
        socket->disconnectFromHost();
        ui->listWidget->addItem(str);
    }
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}
