#include <iostream>
#include "ArchivoLibros.H"
#include <cstring>
#include "libros.h"

using namespace std;



    ArchivoLIbros::ArchivoLIbros(const char*n){
    strcpy(nombre,n);
    }

  int ArchivoLIbros::contarregistros(){
    FILE *p=fopen(nombre,"rb");
    if (p==nullptr){
        return -1;
    }
    fseek(p,0,2);
    int reg=ftell(p);
    fclose(p);
    return reg/sizeof(Libros);
  }

     int ArchivoLIbros::buscarregistros(int){

        FILE *p=fopen(nombre,"rb");
    if (p==nullptr){
        return -1;
    }
    fseek(p,0,2);
    int reg=ftell(p);
    fclose(p);
    return reg/sizeof(Libros);



     }
    ArchivoLIbros ArchivoLIbros::leer(int){

ArchivoLIbros obj;
FILE *p;
p=fopen(nombre,"rb");
if (p==nullptr){
        return obj;
    }
    fseek(p,0,2);

    fread(&obj,sizeof (Libros), 1, p);

    fclose(p);
    return obj;

    }
    bool ArchivoLIbros::modificararchivo(ArchivoLIbros,int){



    }
    int ArchivoLIbros::listar(){

/**FILE *p;
ArchivoLIbros reg;
p=fopen("libros.dat","rb");
if (p==nullptr){
        cout<<"ERROR DE ARCHIVO"<<endl;
return 1;

}
while (fread(&reg,sizeof(ArchivoLIbros),1,p)==1)
{
    reg.mostrar();
}



*/

    }


