#include "mainwindow.h"
#include <QDockWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QListWidget>
#include <QGridLayout>

#include "naviwidget.h"
#include "workwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
//    auto headDock = new QDockWidget(this);
//    auto naviDock = new QDockWidget(this);
//    auto mainDock = new QDockWidget(this);

//    addDockWidget(Qt::TopDockWidgetArea, headDock);
//    addDockWidget(Qt::LeftDockWidgetArea, naviDock);
//    addDockWidget(Qt::RightDockWidgetArea, mainDock);

    auto mainWidget = new QWidget(this);

    auto mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setMargin(0);
    mainLayout->setSpacing(0);

    auto subLayout = new QHBoxLayout;
    subLayout->setContentsMargins(0, 0, 0, 0);
    subLayout->setMargin(0);
    subLayout->setSpacing(0);

    {
        auto headWidget = new QWidget;
        auto headLayout = new QHBoxLayout;
        auto headPathEdit = new QLineEdit;
        auto headBackButton = new QPushButton("<");
        auto headFrontButton = new QPushButton(">");
        headLayout->addWidget(headBackButton);
        headLayout->addWidget(headFrontButton);
        headLayout->addWidget(headPathEdit);
        headWidget->setLayout(headLayout);
        //headDock->setWidget(headWidget);
        mainLayout->addWidget(headWidget);

    }

    {
        auto naviListWidget = new QListWidget(this);
        {
            auto naviWidget = new NaviWidget("桌面",naviListWidget);
            //auto naviWidget2 = new NaviWidget(naviListWidget);

            auto naviItem = new QListWidgetItem;
            QSize size = naviItem->sizeHint();
            naviItem->setSizeHint(QSize(size.width(), 64));
            naviWidget->setSizeIncrement(QSize(size.width(), 64));

            naviListWidget->addItem(naviItem);
            naviListWidget->setItemWidget(naviItem,naviWidget);
        }
        {
            auto naviWidget = new NaviWidget("主目录",naviListWidget);

            auto naviItem = new QListWidgetItem;
            QSize size = naviItem->sizeHint();
            naviItem->setSizeHint(QSize(size.width(), 64));
            naviWidget->setSizeIncrement(QSize(size.width(), 64));

            naviListWidget->addItem(naviItem);
            naviListWidget->setItemWidget(naviItem,naviWidget);
        }

        subLayout->addWidget(naviListWidget);

    }


    {
        auto workMainWidget = new QWidget(this);
        auto workLayout = new QGridLayout;
        workLayout->setSpacing(10);

        {
            auto workWidget = new WorkWidget("file 1");
            workLayout->addWidget(workWidget,0,0);
        }

        {
            auto workWidget = new WorkWidget("file 2");
            workLayout->addWidget(workWidget,0,1);
        }

        {
            auto workWidget = new WorkWidget("file 3");
            workLayout->addWidget(workWidget,0,2);
        }

        {
            auto workWidget = new WorkWidget("file 4");
            workLayout->addWidget(workWidget,0,3);
        }

        {
            auto workWidget = new WorkWidget("file 5");
            workLayout->addWidget(workWidget,1,0);
        }


        workMainWidget->setLayout(workLayout);

        subLayout->addWidget(workMainWidget);

    }
    mainLayout->addLayout(subLayout);
    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{
}

