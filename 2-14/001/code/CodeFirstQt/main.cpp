#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //创建窗口
    QMainWindow w;
    w.show();
#if 0
    QRect rect = w.geometry();//获取位置尺寸
    rect.setWidth(570);
    rect.setHeight(310);
    w.setGeometry(rect);
#endif
    w.resize(570,310);//从新设定大小

    //按钮
    QPushButton bt1(&w);
    bt1.setGeometry(10,20, 200,100);//定位按钮

    //设置或者文字显示
    bt1.setText("开灯");
    QString txt = bt1.text();


    //设置文字字体大小
    QFont font = bt1.font();
    font.setPointSize(36);
    bt1.setFont(font);

    //设置颜色
    bt1.setStyleSheet("color: rgb(255, 55, 202);");

    bt1.show();
    return a.exec();
}
