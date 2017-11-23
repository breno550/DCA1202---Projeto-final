#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

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

    painter.brush(brush);
    painter.pen(pen);

    //desenha um retangulo
    painter.drawRect(0,0, width(), height());

}
