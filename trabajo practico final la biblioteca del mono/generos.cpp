#include <iostream>
#include "cstring"
#include "generos.h"

using namespace std;

void generos::setcatgenero(int c){
categoriagenero=c;
}
void generos::setnombregenero(const char*n){

strcpy(nombregenero,n);

}
int getcatgenero();

const char* getnombregenero();

void cargar();

void mostrar();

