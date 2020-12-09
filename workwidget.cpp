#include "workwidget.h"
#include <QVBoxLayout>
#include <QLabel>

WorkWidget::WorkWidget(QString workname,QWidget *parent) : QWidget(parent)
{
    auto vboxLayout = new QVBoxLayout;
    vboxLayout->setContentsMargins(0, 0, 0, 0);
    vboxLayout->setMargin(0);
    vboxLayout->setSpacing(0);

    auto labelIcon = new QLabel(this);
    labelIcon->setFixedSize(64, 64);

    QImage image(QString(":/res/file.png"));
    labelIcon->setPixmap(QPixmap::fromImage(image));

    labelIcon->setScaledContents(true);
    labelIcon->setStyleSheet("QLabel{padding-left:5px;padding-right:5px;padding-buttom:5px;padding-top:5px;}");

    vboxLayout->addWidget(labelIcon);

    auto labelText = new QLabel(this);
    labelText->setText(workname);
    labelText->setStyleSheet("QLabel{padding-left:5px;padding-right:5px;padding-buttom:5px;padding-top:5px;}");

    vboxLayout->addWidget(labelText);

    setLayout(vboxLayout);

}
