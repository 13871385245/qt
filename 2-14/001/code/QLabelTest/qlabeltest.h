#ifndef QLABELTEST_H
#define QLABELTEST_H

#include <QMainWindow>

namespace Ui {
class QLabelTest;
}

class QLabelTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit QLabelTest(QWidget *parent = 0);
    ~QLabelTest();

private:
    Ui::QLabelTest *ui;
};

#endif // QLABELTEST_H
