#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  int timerId=0;
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  

public slots:
  void getData();
  void timerEvent(QTimerEvent *e);
  void connectIP();
  void disconnectIP();
  void updatelist();
  void startdata();
  void stopdata();
  void tcpConnect();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
