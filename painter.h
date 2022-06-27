#ifndef PAINTER_H
#define PAINTER_H

#include <QDialog>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class Painter; }
QT_END_NAMESPACE

class Painter : public QDialog
{
    Q_OBJECT

public:
    Painter(QWidget *parent = nullptr);
    ~Painter();

    virtual void paintEvent(QPaintEvent *event);

private:
    Ui::Painter *ui;
};
#endif // PAINTER_H
