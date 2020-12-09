#include "naviwidget.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

NaviWidget::NaviWidget(QString naviname,QWidget *parent) : QWidget(parent)
{
     auto hboxLayout = new QHBoxLayout;
     hboxLayout->setContentsMargins(0, 0, 0, 0);
     hboxLayout->setMargin(0);
     hboxLayout->setSpacing(0);

     auto iconLabel = new QLabel(this);
     iconLabel->setFixedSize(64, 64);

     QImage image(QString(":/res/desktop.ico"));
     iconLabel->setPixmap(QPixmap::fromImage(image));

     iconLabel->setScaledContents(true);
     iconLabel->setStyleSheet("QLabel{padding-left:5px;padding-right:5px;padding-buttom:5px;padding-top:5px;}");

     hboxLayout->addWidget(iconLabel);

     auto iconButton = new QLabel(this);
     iconButton->setText(naviname);
     iconButton->setStyleSheet("QLabel{padding-left:5px;padding-right:5px;padding-buttom:5px;padding-top:5px;}");

     hboxLayout->addWidget(iconButton);

     setLayout(hboxLayout);
}
