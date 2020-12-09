#include "mainwindow.h"
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto headDock = new QDockWidget;
    auto naviDock = new QDockWidget;
    auto mainDock = new QDockWidget;

    addDockWidget(Qt::TopDockWidgetArea, headDock);
    addDockWidget(Qt::LeftDockWidgetArea, naviDock);
    addDockWidget(Qt::RightDockWidgetArea, mainDock);


}

MainWindow::~MainWindow()
{
}

