#ifndef WORKWIDGET_H
#define WORKWIDGET_H

#include <QWidget>

class WorkWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WorkWidget(QString workname,QWidget *parent = nullptr);

signals:

};

#endif // WORKWIDGET_H
