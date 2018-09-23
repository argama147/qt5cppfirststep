#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "graphicsscene.h"

namespace Ui {
class Widget;
}

class GraphicsScene;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    GraphicsScene m_scene;
};

#endif // WIDGET_H
