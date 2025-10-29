#ifndef PRESTAMOS_H_INCLUDED
#define PRESTAMOS_H_INCLUDED
#include "clsFecha.h"

class prestamos{
private:

int idlibroprestado;

int idsocioprestamo;

int numeroprestamo;

Fecha fechadevolucion;

Fecha fechaprestamo;

Fecha fechalimitedevolucion;


public:

void setfechadevolucion(Fecha);

void setfechaprestamo(Fecha);

 void setfechalimite(Fecha);

void setnumeroprestamo(int);

void setidsociopres(int);

 void setidlibroprestado(int);

int getidlibroprestado();

int getidsociopres();

Fecha getfechadevolucion();

Fecha getfechaprestamo();

Fecha getfechalimite();

int getnumeroprestamo();

void cargar();

void mostrar();


};

#endif // PRESTAMOS_H_INCLUDED
