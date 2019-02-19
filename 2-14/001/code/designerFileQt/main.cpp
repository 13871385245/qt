#include "desigerfileqt.h"  //自定义界面头文件（创建一个创建同时创建.h, .cpp,.ui）
#include <QApplication> //Qt程序管理类

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  //管理app类对象---一个qt程序只能创建一个QApplication对象

    DesigerFileQt w;  // 自定义窗口，
    w.show();//显示窗口

//    DesigerFileQt w1;  // 自定义窗口，
//    w1.show();//显示窗口

//    DesigerFileQt w2;  // 自定义窗口，
//    w2.show();//显示窗口

    return a.exec(); //qt程序进入循环（界面刷新， 动作处理）
}
