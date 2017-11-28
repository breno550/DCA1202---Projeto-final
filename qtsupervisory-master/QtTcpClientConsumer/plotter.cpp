#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <iostream>
#include <QVector>
using namespace std;

#define PI 3.1415

Plotter::Plotter(QWidget *parent) : QWidget(parent){

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

    /*for(int i=0;i<dado.size();i+=2){
       if(dado.isEmpty()==false && tempo.isEmpty()==false){
           cout<<"worked";
           painter.drawLine(tempo[i], dado[i], tempo[i+1], dado[i+1]);
       }
    }*/
    //painter.drawLine(1,4,width(), 0);
}

void Plotter::setCorde(QVector<long double> _cord){
    d_max = _cord[0];
    d_min = _cord[0];

      //acha min e max
    for(int i=0;i<_cord.size();i++){
        if(_cord[i] < d_min)
            d_min = _cord[i];

        if(_cord[i] > d_max)
            d_max = _cord[i];
    }
    cout<<"\n //////////////////d_max e d_min ///////////"<<endl;
    cout<<"d_max = "<<d_max<<endl;
    cout<<"d_min = "<<d_min<<endl;

    cout<<"\n /////////// dados before vector e after //////////"<<endl;

    for(int i=0;i<_cord.size();i++){
        dado.push_back(((_cord[i] - d_min) / (d_max - d_min)));
   cout<<"before: "<<_cord[i]<<"     after: "<<dado[i]<<endl;
    }
    repaint();
}

void Plotter::setTemp(QVector<long long> _temp){
    t_max = _temp[0];
    t_min = _temp[0];

    //acha min e max
    for(int i=0;i<_temp.size();i++){
        if(_temp[i] < t_min)
            t_min = _temp[i];

        if(_temp[i] > t_max)
            t_max = _temp[i];
    }

    cout<<"t_max = "<<t_max<<endl;
    cout<<"t_min = "<<t_min<<endl;

    //manda o numero pra normalizar e dps encaixa no vector
    for(int i=0;i<_temp.size();i++){
        tempo.push_back((_temp[i] - t_min) / (t_max - t_min));
    }

    repaint();
}


//equcao de normalizacao y[i] = (x[i]-min)
//                               /////////
//                               (max - min)
// normalizar coop entre 0 e 1
