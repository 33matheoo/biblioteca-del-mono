#include <iostream>
#include "prestamos.h"
#include "clsfecha.h"


using namespace std;


void prestamos::setfechadevolucion(Fecha fd){

fechadevolucion=fd;

}
void prestamos::setfechaprestamo(Fecha fp){

fechaprestamo=fp;


}
void prestamos::setfechalimite(Fecha fl){


fechalimitedevolucion=fl;

}
void prestamos::setnumeroprestamo(int np){


numeroprestamo=np;


}

void prestamos::setidsociopres(int sp){

idsocioprestamo=sp;


}

void prestamos::setidlibroprestado(int lp){


idlibroprestado=lp;



}


int getidlibroprestado();

int getidsociopres();

Fecha getfechadevolucion();

Fecha getfechaprestamo();

Fecha getfechalimite();

int getnumeroprestamo();

void cargar();

void mostrar();
