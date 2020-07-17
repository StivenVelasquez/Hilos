#include "threadnumeros.h"

ThreadNumeros::ThreadNumeros(QObject *parent) : QThread(parent){}//Constructor

void ThreadNumeros::run()//El punto de partida para el hilo, después de llamar a start() el hilo recién creado llama
//a esta función
{
    for(int i=0;i<1000000;++i){
        emit numeroNuevo(i); //Se emite la variable i
        msleep(100); //Se duerme el programa para que no presente problemas por ejecutarse con una velocidad muy grande
    }
}
