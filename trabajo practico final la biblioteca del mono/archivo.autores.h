#ifndef ARCHIVO_AUTORES_H_INCLUDED
#define ARCHIVO_AUTORES_H_INCLUDED


class archivoAutores{

private:
    char nombreAutor[20];
public:
    archivoAutores (const char*a="libros.dat");
     int contarregistros();
    int buscarregistros(int);
    archivoAutores leer(int);
    bool modificararchivo(archivoAutores,int);
    int listar();


};



#endif // ARCHIVO_AUTORES_H_INCLUDED
