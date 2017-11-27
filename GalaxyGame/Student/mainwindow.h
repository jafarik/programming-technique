#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "galaxy.hh"
#include "initialize.hh"
#include "igamerunner.hh"
#include "utility.hh"
#include "dialog.h"

#include <memory>
#include <time.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setDialog(Dialog *h);

private slots:
    void on_quite_game_button_clicked();

    void on_start_game_button_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *h;
};

#endif // MAINWINDOW_H
