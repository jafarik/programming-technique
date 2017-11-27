#include "dialogtwo.h"
#include "ui_dialogtwo.h"

DialogTwo::DialogTwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTwo)
{
    ui->setupUi(this);
}

DialogTwo::~DialogTwo()
{
    delete ui;
}
