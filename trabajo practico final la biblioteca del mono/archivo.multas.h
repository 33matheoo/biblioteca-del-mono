#ifndef ARCHIVO_MULTAS_H_INCLUDED
#define ARCHIVO_MULTAS_H_INCLUDED

class archivoMultas{


private:

public:
       archivoMultas (const char*m="libros.dat");
     int contarregistros();
    int buscarregistros(int);
    archivoMultas leer(int);
    bool modificararchivo(archivoMultas,int);
    int listar();

};
void cargar();
void mostrar();

#endif // ARCHIVO_MULTAS_H_INCLUDED
