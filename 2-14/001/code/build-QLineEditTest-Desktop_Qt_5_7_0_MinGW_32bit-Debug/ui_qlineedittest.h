/********************************************************************************
** Form generated from reading UI file 'qlineedittest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLINEEDITTEST_H
#define UI_QLINEEDITTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QLineEditTest
{
public:
    QLineEdit *userEdit;
    QLineEdit *passEdit;
    QPushButton *loginBt;
    QLabel *label;

    void setupUi(QWidget *QLineEditTest)
    {
        if (QLineEditTest->objectName().isEmpty())
            QLineEditTest->setObjectName(QStringLiteral("QLineEditTest"));
        QLineEditTest->resize(801, 481);
        QLineEditTest->setStyleSheet(QLatin1String("QLineEdit{\n"
"	\n"
"	border:1px solid#123455;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"\n"
"QPushButton{\n"
"	border:2px solid#ff5500;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(255, 170, 0);\n"
"}\n"
"\n"
"\n"
""));
        userEdit = new QLineEdit(QLineEditTest);
        userEdit->setObjectName(QStringLiteral("userEdit"));
        userEdit->setGeometry(QRect(70, 140, 241, 51));
        QFont font;
        font.setPointSize(16);
        userEdit->setFont(font);
        userEdit->setStyleSheet(QStringLiteral(""));
        userEdit->setMaxLength(1111111111);
        userEdit->setEchoMode(QLineEdit::Normal);
        userEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        passEdit = new QLineEdit(QLineEditTest);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(70, 220, 241, 51));
        passEdit->setFont(font);
        passEdit->setEchoMode(QLineEdit::Password);
        loginBt = new QPushButton(QLineEditTest);
        loginBt->setObjectName(QStringLiteral("loginBt"));
        loginBt->setGeometry(QRect(100, 320, 191, 71));
        QFont font1;
        font1.setPointSize(35);
        font1.setBold(false);
        font1.setWeight(50);
        loginBt->setFont(font1);
        loginBt->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(QLineEditTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 381, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("color: rgb(255, 170, 0);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
""));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(QLineEditTest);

        QMetaObject::connectSlotsByName(QLineEditTest);
    } // setupUi

    void retranslateUi(QWidget *QLineEditTest)
    {
        QLineEditTest->setWindowTitle(QApplication::translate("QLineEditTest", "QLineEditTest", 0));
        userEdit->setPlaceholderText(QApplication::translate("QLineEditTest", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0));
        passEdit->setPlaceholderText(QApplication::translate("QLineEditTest", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        loginBt->setText(QApplication::translate("QLineEditTest", "\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("QLineEditTest", "\346\254\242\350\277\216\347\231\273\351\231\206GameBox\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class QLineEditTest: public Ui_QLineEditTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLINEEDITTEST_H
