#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include "childdialog.h"

namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = nullptr);
    ~MainDialog();

private:
    Ui::MainDialog *ui;
    //Se crea el hijo de la clase MainDialog
    ChildDialog *mChildDialog;//Se instancia la clase ChildDialog
};

#endif // MAINDIALOG_H
