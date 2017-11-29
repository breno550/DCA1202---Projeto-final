#ifndef PLOTTER_H
#define PLOTTER_H
#include <QWidget>
#include <QVector>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    long double d_max=0, d_min=0;
    ///deixar essa vadia longdouble
    long t_max=0, t_min=0;
    QVector<long double> dado;
    QVector<long double> tempo;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void setCorde(QVector<long double> _cord);
    void setTemp(QVector<long long> _temp);
signals:

public slots:

};

#endif // PLOTTER_H
