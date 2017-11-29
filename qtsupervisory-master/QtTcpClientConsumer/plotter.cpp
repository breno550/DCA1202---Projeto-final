#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <iostream>
#include <QVector>
using namespace std;

#define PI 3.1415

Plotter::Plotter(QWidget *parent) : QWidget(parent){
    for(int i=0;i<30;i++){
        tempo.push_back(0);
        dado.push_back(0);
    }
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

    //teste de dados
    /*cout<<"DADOS:  "<<endl;
    for(int i=0;i<dado.size();i++){
        cout<<dado[i]<<endl;
    }
    cout<<"TEMPO:    "<<endl;
    for(int i=0;i<tempo.size();i++){
        cout<<tempo[i]<<endl;
    }*/

    double x1=0, x2, y1=0, y2;
    for(int i=0;i<tempo.size()-1;i++){
        x1 = tempo[i] * width();
        y1 =height() * (1 - dado[i]);

        x2=tempo[i+1] * width();
        y2=height()*(1-dado[i+1]);
        painter.drawLine(x1, y1, x2, y2);
    }
}

void Plotter::setCorde(QVector<long double> _cord){
    d_max = _cord[0];
    d_min = _cord[0];
    dado.clear();
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
    tempo.clear();
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
        tempo.push_back((long double)(_temp[i] - t_min) / (t_max - t_min));
    }

    repaint();
}


//equcao de normalizacao y[i] = (x[i]-min)
//                               /////////
//                               (max - min)
// normalizar coop entre 0 e 1
