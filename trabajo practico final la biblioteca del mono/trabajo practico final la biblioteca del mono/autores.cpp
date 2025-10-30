#include <iostream>
#include "cstring"
#include "autores.h"
using namespace std;

void autores::setNombreautor(const char* n){

strcpy(Nombreautor,n);
}
void autores::setidautor(int ia){

    idautor=ia;
}
void autores::setfechanacimiento(Fecha fn){

fechanacimiento=fn;
}
const char* getNombreautor();

int getidautor();

Fecha getfechanacimiento();

void cargar();

void mostrar();
