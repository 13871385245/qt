/********************************************************************************
** Form generated from reading UI file 'qlabeltest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLABELTEST_H
#define UI_QLABELTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QLabelTest
{
public:
    QWidget *centralWidget;
    QLabel *titlelabel;
    QLabel *llabel;
    QLabel *rlabel;

    void setupUi(QMainWindow *QLabelTest)
    {
        if (QLabelTest->objectName().isEmpty())
            QLabelTest->setObjectName(QStringLiteral("QLabelTest"));
        QLabelTest->resize(500, 300);
        centralWidget = new QWidget(QLabelTest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        titlelabel = new QLabel(centralWidget);
        titlelabel->setObjectName(QStringLiteral("titlelabel"));
        titlelabel->setGeometry(QRect(0, 0, 500, 100));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        titlelabel->setFont(font);
        titlelabel->setStyleSheet(QLatin1String("color: rgb(255, 17, 120);\n"
"background-color: rgb(6, 6, 6);"));
        titlelabel->setAlignment(Qt::AlignCenter);
        llabel = new QLabel(centralWidget);
        llabel->setObjectName(QStringLiteral("llabel"));
        llabel->setGeometry(QRect(70, 150, 121, 91));
        llabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/cosmos.jpg")));
        llabel->setScaledContents(true);
        rlabel = new QLabel(centralWidget);
        rlabel->setObjectName(QStringLiteral("rlabel"));
        rlabel->setGeometry(QRect(320, 150, 100, 100));
        rlabel->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/image/cosmos.jpg);\n"
"border-image: url(:/new/prefix1/image/girl.jpg);\n"
"border:1px solid#123456;\n"
"border-radius:50px;"));
        rlabel->setScaledContents(true);
        QLabelTest->setCentralWidget(centralWidget);

        retranslateUi(QLabelTest);

        QMetaObject::connectSlotsByName(QLabelTest);
    } // setupUi

    void retranslateUi(QMainWindow *QLabelTest)
    {
        QLabelTest->setWindowTitle(QApplication::translate("QLabelTest", "QLabelTest", 0));
        titlelabel->setText(QApplication::translate("QLabelTest", "\346\254\242\350\277\216\345\255\246\344\271\240Qt\347\274\226\347\250\213", 0));
        llabel->setText(QString());
        rlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QLabelTest: public Ui_QLabelTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLABELTEST_H
