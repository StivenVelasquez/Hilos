#ifndef CHILDDIALOG_H
#define CHILDDIALOG_H

#include <QDialog>
#include "threadnumeros.h"

namespace Ui {
class ChildDialog;
}

class ChildDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChildDialog(QWidget *parent = nullptr);
    ~ChildDialog();

private:
    Ui::ChildDialog *ui;
    ThreadNumeros *mThread; //Se instancia la clase ThreadNumeros
};

#endif // CHILDDIALOG_H
