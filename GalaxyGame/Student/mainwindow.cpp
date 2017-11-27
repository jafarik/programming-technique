#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(/*std::shared_ptr<Common::IEventHandler> handler,*/
                       /*std::shared_ptr<Student::Galaxy> galaxy,*/
                       QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
