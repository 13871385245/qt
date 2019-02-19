#ifndef QLINEEDITTEST_H
#define QLINEEDITTEST_H

#include <QWidget>

namespace Ui {
class QLineEditTest;
}

class QLineEditTest : public QWidget
{
    Q_OBJECT

public:
    explicit QLineEditTest(QWidget *parent = 0);
    ~QLineEditTest();

private slots:
    void on_loginBt_clicked();

private:
    Ui::QLineEditTest *ui;
};

#endif // QLINEEDITTEST_H
