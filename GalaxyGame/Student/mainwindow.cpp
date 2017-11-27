#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(/*std::shared_ptr<Common::IEventHandler> handler,*/
                       /*std::shared_ptr<Student::Galaxy> galaxy,*/
                       QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    connect(ui->start_game_button, SIGNAL(clicked(bool) ), this, SLOT(accepted() )  );
//    connect(ui->quite_game_button, SIGNAL(clicked(bool) ), this, SLOT(regect() ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setDialog(Dialog *h)
{
    this->h = h;
}

void MainWindow::on_quite_game_button_clicked()
{
//    h->implementUi();
//    h->show();

}

void MainWindow::on_start_game_button_clicked()
{
    h->implementUi();
    h->show();


}
