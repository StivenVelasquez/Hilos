#ifndef THREADNUMEROS_H
#define THREADNUMEROS_H

#include <QObject>
#include <QThread>

class ThreadNumeros : public QThread //Hereda de la clase QThread
{
    Q_OBJECT
public:
    explicit ThreadNumeros(QObject *parent = nullptr);//Constructor
protected:
    void run(); //El punto de partida para el hilo, después de llamar a start() el hilo recién creado llama
                //a esta función
signals:
    void numeroNuevo(int); // Señal para emitir los números


};

#endif // THREADNUMEROS_H
