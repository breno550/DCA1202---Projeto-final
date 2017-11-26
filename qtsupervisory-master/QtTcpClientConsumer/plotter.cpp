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

void Plotter::paintEvent(QPaintEvent *event, QVector<int> _cord){
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

    coop = _cord;
    cout<<coop.size()<<endl;
    //cout<<coop.size();
    for(int i = 0;i<coop.size();i+=2){
        painter.drawLine(coop[i], 0, coop[i+1], 0);
    }
}

void Plotter::setCorde(QVector<int> _cord){
    coop = _cord;
   /* cout<<_cord.size()<<"tamanho filha da puta"<<endl;
    cout<<coop[j]<<endl;*/
    entrousete=true;

}

void Plotter::timerEvent(QTimerEvent *event){
    j+=2;
    repaint();
}
