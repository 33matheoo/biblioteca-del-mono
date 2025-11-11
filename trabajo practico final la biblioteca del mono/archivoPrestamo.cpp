#include <iostream>
#include <cstring>
#include "archivoPrestamo.h"


using namespace std;

 ArchivoPrestamo::ArchivoPrestamo(const char*n){
    strcpy(nombre,n);
    }

  int ArchivoPrestamo::contarregistros(){
    FILE *p=fopen(nombre,"rb");
    if (p==nullptr){
        return -1;
    }

    fseek(p,0,2);
    int reg=ftell(p);
    fclose(p);
    return reg/sizeof(ArchivoPrestamo);
  }
     int ArchivoPrestamo::buscarregistros(int){



     }
    ArchivoPrestamo  ArchivoPrestamo::leer(int) {

    }
    bool ArchivoPrestamo::modificararchivo(ArchivoPrestamo,int){

    }
    void ArchivoPrestamo::listar(){

    }




