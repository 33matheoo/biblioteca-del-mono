#ifndef ARCHIVOLIBROS_H_INCLUDED
#define ARCHIVOLIBROS_H_INCLUDED
#include "libros.h"
using namespace std;

class ArchivoLIbros{

        private:
    char nombre[20];

        public:
    ArchivoLIbros(const char*n="libros.dat");
    int contarregistros();
    int buscarregistros(int);
    ArchivoLIbros leer(int);
    bool modificararchivo(ArchivoLIbros,int);
    int listar();



void cargar();
void mostrar();
};





#endif // ARCHIVOLIBROS_H_INCLUDED
