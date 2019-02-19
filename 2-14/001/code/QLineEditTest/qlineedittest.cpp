#include "qlineedittest.h"
#include "ui_qlineedittest.h"
#include <QMessageBox>
#include <QDebug>

QLineEditTest::QLineEditTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QLineEditTest)
{
    ui->setupUi(this);

    //this->setStyleSheet("QWidget#QLineEditTest{background-image: url(:/new/prefix1/image/girl.jpg);}");

    QPalette palette;
    QPixmap pixmap(":/new/prefix1/image/1.bmp");
    QBrush brush(pixmap);
    palette.setBrush(QPalette::Background, brush);
    this->setPalette(palette);

}

QLineEditTest::~QLineEditTest()
{
    delete ui;
}

void QLineEditTest::on_loginBt_clicked()
{
    //获取用户名和密码
    QString user = ui->userEdit->text();
    QString pass = ui->passEdit->text();
    if(user == "root" && pass == "123456")
    {
        //登录成功
        //QMessageBox::information(this, "登录提示","登录成功");
        QMessageBox  box;
        box.addButton("确定",QMessageBox::AcceptRole);
        box.addButton("取消",QMessageBox::RejectRole);
        box.setWindowTitle("登录提示");
        box.setText("登录成功");
        int ret = box.exec();
        qDebug()<<ret;
    }else
    {
        //登录失败
        int ret = QMessageBox::information(this,
                                 "登录提示","用户或密码错误,是否重新输入"
                                 ,QMessageBox::Yes,QMessageBox::No);
        if(ret  == QMessageBox::Yes)
        {
            ui->userEdit->clear();
            ui->passEdit->clear();
        }else
        {
            int ret1 = QMessageBox::information(this,
                                     "登录提示","是否需要关闭程序"
                                     ,QMessageBox::Yes,QMessageBox::No);
            if(ret1  == QMessageBox::Yes)
            {
                this->close();
            }else
            {
                ui->userEdit->clear();
                ui->passEdit->clear();
            }
        }
    }
    //Qt调试输出
    qDebug()<<user<<pass;
}
