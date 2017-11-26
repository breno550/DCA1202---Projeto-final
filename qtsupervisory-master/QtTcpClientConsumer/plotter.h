#ifndef PLOTTER_H
#define PLOTTER_H
#include <QWidget>
#include <QVector>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    bool entrousete=false;
    int i=0;
    int j=0;
    int x=0;
    int x2=0;
    QVector<int> coop;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event, QVector<int> _cord);
    void timerEvent(QTimerEvent *event);
    void setCorde(QVector<int> _cord);
signals:

public slots:

};

#endif // PLOTTER_H
