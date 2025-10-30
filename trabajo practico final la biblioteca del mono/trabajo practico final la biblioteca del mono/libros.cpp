#include "libros.h"
#include <cstring>
#include <iostream>
using namespace std;


void Libros::setidlibro(int n){
idlibro=n;
}
void Libros::setnombrelibro(const char* n){
    strcpy(nombrelibro,n);
}
void Libros::settipogenero(int t){


tipogenero=t;

}
void Libros::setidautorlibro(int idau){


idautorlibro=idau;

}
void Libros::setfechapublicacion(Fecha fp){

fechapublicacion= fp;

}
void Libros::setcantejemplares(int c){


cantejemplares=c;

}
void Libros::setfechaentrada(Fecha fe){

fechadeetrada=fe;

}

const char* getnombrelibro();

int gettipogenero();

int getidautorlibro();

Fecha getfechapublicacion();

int getcantejemplares();

int getidlibro();

Fecha getfechaentrada();

void cargar();

void Mostrar();







