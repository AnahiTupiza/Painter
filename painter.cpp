#include "painter.h"
#include "ui_painter.h"

Painter::Painter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Painter)
{
    ui->setupUi(this);
}

Painter::~Painter()
{
    delete ui;
}

void Painter::paintEvent(QPaintEvent *event)
{
    //crear el objeto painter . establecer el formulario como su lienzo
    QPainter pintor(this);

    //establecer un color a su pincel
    pintor.setPen(Qt::blue);

    //dibujar una linea
    pintor.drawLine(100, 100, 200, 200);

    //cambiar el color
    pintor.setPen(Qt::red);

    //establecer un tipo y tamaño de letra
    pintor.setFont(QFont("Arial", 30));

    //dibujar un texto
    pintor.drawText(250, 150, "Picaso");

    //crear un nuevo pincel
    QPen pincel;
    pincel.setColor(Qt::green);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    //Utilizar el nuevo pincel
    pintor.setPen(pincel);

    //establecer un brocha
    pintor.setBrush(Qt::black);

    //dibujar un rectangulo
    pintor.drawRect(400, 100, 100, 100);

    //crear un nuevo color
    QColor miColor(255,221,129);

    //crear un nuevo pincel
    QPen pincel2;
    pincel2.setColor(Qt::black);
    pincel2.setWidth(5);
    pincel2.setStyle(Qt::DotLine);

    //establecer el nuevo pincel
    pintor.setPen(pincel2);

    //cambiar la brocha RELLENOS
    pintor.setBrush(miColor);

    //dibujor un circulo
    pintor.drawEllipse(450,100,100,100);

    //trabajo en clase
    pintor.setPen(Qt::gray);
    pintor.setFont(QFont("Times", 36));
    pintor.drawText(50,290, "Trabajo en clase");

    pintor.setPen(Qt::red);
    pintor.setWindow(-60,-60,100,100);
    pintor.rotate(45);
    pintor.drawRect(-6,-6,10,10);

    pintor.setPen(Qt::black);
    pintor.drawLine(200, 100, 200, 200);

    pintor.rotate(10);
    pintor.drawRect(5,5,70,70);



}

