#ifndef GENEROS_H_INCLUDED
#define GENEROS_H_INCLUDED
class generos{
private:

int categoriagenero;

char nombregenero[20];

public:

void setcatgenero(int);

void setnombregenero(const char*);

int getcatgenero();

const char* getnombregenero();

void cargar();

void mostrar();
};

#endif // GENEROS_H_INCLUDED
