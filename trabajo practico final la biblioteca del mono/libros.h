#ifndef LIBROS_H_INCLUDED
#define LIBROS_H_INCLUDED
#include "ArchivoLibros.H"
#include "clsfecha.h"
class Libros {

private:

int idlibro;

char nombrelibro[40];

int tipogenero;

int idautorlibro;

Fecha fechapublicacion;

int cantejemplares;

Fecha fechadeetrada;

public:

void setidlibro(int);

void setnombrelibro(const char*);

void settipogenero(int);

void setidautorlibro(int);

void setfechapublicacion(Fecha);

void setcantejemplares(int);

void setfechaentrada(Fecha);

const char* getnombrelibro();

int gettipogenero();

int getidautorlibro();

Fecha getfechapublicacion();

int getcantejemplares();

int getidlibro();

Fecha getfechaentrada();

void cargar();

void Mostrar();
}

#endif // LIBROS_H_INCLUDED
