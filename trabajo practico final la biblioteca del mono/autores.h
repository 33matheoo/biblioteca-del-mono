#ifndef AUTORES_H_INCLUDED
#define AUTORES_H_INCLUDED
#include "clsFecha.h"


class autores {

private:

char Nombreautor[20];

int idautor ;

Fecha fechanacimiento;



public:

void setNombreautor(const char*);

void setidautor(int);

void setfechanacimiento(Fecha);

const char* getNombreautor();

int getidautor();

Fecha getfechanacimiento();

void cargar();

void mostrar();
};

#endif // AUTORES_H_INCLUDED
