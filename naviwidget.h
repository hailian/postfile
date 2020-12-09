#ifndef NAVIWIDGET_H
#define NAVIWIDGET_H

#include <QWidget>

class NaviWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NaviWidget(QString naviname,QWidget *parent = nullptr);

signals:

};

#endif // NAVIWIDGET_H
