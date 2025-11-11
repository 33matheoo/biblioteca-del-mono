#include <iostream>
#include <cstring>
#include "archivoGeneros.h"


using namespace std;

 ArchivoGeneros::ArchivoGeneros(const char*n){
    strcpy(nombre,n);
    }

  int ArchivoGeneros::contarregistros(){
    FILE *p=fopen(nombre,"rb");
    if (p==nullptr){
        return -1;
    }
    fseek(p,0,2);
    int reg=ftell(p);
    fclose(p);
    return reg/sizeof( ArchivoGeneros);
  }
     int ArchivoGeneros::buscarregistros(int){



     }

    ArchivoGeneros ArchivoGeneros::leer(int){




    }
    bool ArchivoGeneros::modificararchivo(ArchivoGeneros,int){

    }
    void ArchivoGeneros::listar(){

    }






