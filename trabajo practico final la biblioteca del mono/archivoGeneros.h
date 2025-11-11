#ifndef ARCHIVOGENEROS_H_INCLUDED
#define ARCHIVOGENEROS_H_INCLUDED
#include "archivoGeneros.h"

class ArchivoGeneros{

        private:
    char nombre[20];
        public:
    ArchivoGeneros(const char*n="libros.dat");
    int contarregistros();
    int buscarregistros(int);
    ArchivoGeneros leer(int);
    bool modificararchivo(ArchivoGeneros,int);
    void listar();

};






#endif // ARCHIVOGENEROS_H_INCLUDED
