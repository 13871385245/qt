#include "desigerfileqt.h"
#include "ui_desigerfileqt.h"

DesigerFileQt::DesigerFileQt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DesigerFileQt)
{
    ui->setupUi(this);
}

DesigerFileQt::~DesigerFileQt()
{
    delete ui;
}
