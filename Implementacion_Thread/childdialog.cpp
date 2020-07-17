#include "childdialog.h"
#include "ui_childdialog.h"

ChildDialog::ChildDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChildDialog)
{
    ui->setupUi(this);
    mThread=new ThreadNumeros(this); //Se inicializa el puntero
    mThread->start(QThread::HighestPriority);//Se ejecuta el thread y se le da la más alta prioridad
    connect(mThread,&ThreadNumeros::numeroNuevo, [&](int n){ //Se conecta el mThread con la señal de numeroNuevo hacia el slot
         ui->listWidget->addItem(QString::number(n)); //Se va agregando a la lista los números

    });
}

ChildDialog::~ChildDialog()
{
    delete ui;
}
