#include "qlabeltest.h"
#include "ui_qlabeltest.h"

QLabelTest::QLabelTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QLabelTest)
{
    ui->setupUi(this);
}

QLabelTest::~QLabelTest()
{
    delete ui;
}
