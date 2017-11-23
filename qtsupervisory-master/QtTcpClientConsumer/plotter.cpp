#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

#define PI 3.1415

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    int x1, x2, y1, y2;
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

    //desenha linha
    painter.drawLine(0, height()/2,width(), height()/2);

    for(int i = 1; i < width();i++){
        painter.drawLine(x1, y1, x2, y2);
    }
    //y = sin(2*PI*freq*t+angulo)
}
