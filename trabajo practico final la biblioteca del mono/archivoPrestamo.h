#ifndef ARCHIVOPRESTAMO_H_INCLUDED
#define ARCHIVOPRESTAMO_H_INCLUDED
#include "archivoPrestamo.h"

class ArchivoPrestamo{

        private:
    char nombre[20];
        public:
    ArchivoPrestamo(const char*n="libros.dat");
    int contarregistros();
    int buscarregistros(int);
    ArchivoPrestamo leer(int);
    bool modificararchivo(ArchivoPrestamo,int);
    void listar();

};





#endif // ARCHIVOPRESTAMO_H_INCLUDED



