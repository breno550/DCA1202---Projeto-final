#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <iostream>
#include <QVector>
using namespace std;

#define PI 3.1415

Plotter::Plotter(QWidget *parent) : QWidget(parent){
    startTimer(2000);
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    //brush cor amarela
    brush.setColor(QColor(255, 255, 100));
    brush.setStyle(Qt::SolidPattern);

    //caneta cor vermelha
    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);

    //desenha um retangulo
    painter.drawRect(0,0, width(), height());

    pen.setColor(QColor(255, 180, 0));
    painter.setPen(pen);

    cout<<x<<" "<< x2<<endl;
    painter.drawLine(x, 0, x2, 0);

   // painter.drawLine(cordenadas[i], 0, cordenadas[i+1], 0);
}

void Plotter::setCorde(QVector<int> _cord){
    x = _cord[i];
    x2 = _cord[i+1];
}

void Plotter::timerEvent(QTimerEvent *event){
    i+=2;
    repaint();
}
