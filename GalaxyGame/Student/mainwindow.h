#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "galaxy.hh"
#include "initialize.hh"
#include "igamerunner.hh"
#include "utility.hh"
#include "eventhandler.hh"
#include <memory>
#include <time.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(/*std::shared_ptr<Common::IEventHandler> handler,*/
                        /*std::shared_ptr<Student::Galaxy> galaxy,*/
                        QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
