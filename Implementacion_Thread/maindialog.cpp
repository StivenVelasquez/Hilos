#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    mChildDialog=new ChildDialog(this);  // Se inicializa el puntero
    mChildDialog->show(); //Se muestra la ventana
}

MainDialog::~MainDialog()
{
    delete ui;
}
