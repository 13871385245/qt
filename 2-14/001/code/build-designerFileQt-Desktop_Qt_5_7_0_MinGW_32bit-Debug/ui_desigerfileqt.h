/********************************************************************************
** Form generated from reading UI file 'desigerfileqt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGERFILEQT_H
#define UI_DESIGERFILEQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DesigerFileQt
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *DesigerFileQt)
    {
        if (DesigerFileQt->objectName().isEmpty())
            DesigerFileQt->setObjectName(QStringLiteral("DesigerFileQt"));
        DesigerFileQt->resize(570, 310);
        centralWidget = new QWidget(DesigerFileQt);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 200, 100));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 55, 202);"));
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 10, 241, 131));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 160, 241, 131));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 160, 241, 131));
        DesigerFileQt->setCentralWidget(centralWidget);

        retranslateUi(DesigerFileQt);

        QMetaObject::connectSlotsByName(DesigerFileQt);
    } // setupUi

    void retranslateUi(QMainWindow *DesigerFileQt)
    {
        DesigerFileQt->setWindowTitle(QApplication::translate("DesigerFileQt", "DesigerFileQt", 0));
        pushButton->setText(QApplication::translate("DesigerFileQt", "\345\274\200\347\201\257", 0));
        pushButton_2->setText(QApplication::translate("DesigerFileQt", "\345\205\263\347\201\257", 0));
        pushButton_3->setText(QApplication::translate("DesigerFileQt", "\345\205\263\351\227\250", 0));
        pushButton_4->setText(QApplication::translate("DesigerFileQt", "\345\274\200\351\227\250", 0));
    } // retranslateUi

};

namespace Ui {
    class DesigerFileQt: public Ui_DesigerFileQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGERFILEQT_H
