#ifndef DESIGERFILEQT_H
#define DESIGERFILEQT_H

#include <QMainWindow>

namespace Ui {
class DesigerFileQt;
}

class DesigerFileQt : public QMainWindow
{
    Q_OBJECT

public:
    explicit DesigerFileQt(QWidget *parent = 0);
    ~DesigerFileQt();

private:
    Ui::DesigerFileQt *ui;
};

#endif // DESIGERFILEQT_H
