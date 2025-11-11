#include <iostream>
#include "menu.cls.h"
#include "clsFecha.h"

using namespace std;


int menuprincipal()
{
    int opcion;
    while(true)
    {
        system("cls");
        cout<<"=============================="         <<endl;
        cout<<"         MENU PRINCIPAL"                <<endl;
        cout<<"=============================="         <<endl;
        cout<<"1- libros    :"<<endl;
        cout<<"2- socios    :"<<endl;
        cout<<"3- prestamos :"<<endl;
        cout<<"4- autores   :"<<endl;
        cout<<"5- multas    :"<<endl;
        cout<<"6- generos   :"<<endl;
        cout<<"0- SALIR     :"<<endl;
        cout<<"=============================="         <<endl;
        cout<<"SELECCIONAR UNA OPCION :";
        cin>>opcion;
        cout<<endl;

        switch(opcion)
        {
        case 1:
            menulibros();
            break;
        case 2:
            menusocios();
            break;
        case 3:
            menuPrestamos();
            break;
        case 4:
            menuAutores();
            break;
        case 5:
            menuMultas();
            break;
        case 6:
            menuGeneros();
            break;
        case 0:
            cout<<"SALIENDO DEL SISTEMA... "<<endl;

            return 0;



        }

    }
}
void menulibros()
{
    int opcion;
    while(true)
    {
        system ("cls");
        cout<<"1-LISTAR LIBROS:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
        cout<<"SELECCIONAR UNA OPCION :";
        cin>>opcion;


        switch(opcion)
        {

        case 1:




            break;
        case 2:



            break;

        case 3:
            break;

        case 4:



            break;
        case 0:

menuprincipal();



            break;
        }



    }


}


void menusocios()
{
int opcion;
    while(true)
    {
        system ("cls");
        cout<<"1-LISTAR SOCIOS:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS  :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
        cout<<"SELECCIONAR UNA OPCION :";
        cin>>opcion;

        switch(opcion)
        {

        case 1:
            break;
        case 2:
            break;
    case 3:
           /// cargarSocio();
            break;
    case 4:
            break;
    case 0:
            menulibros();

        }
    }
}
    void menuPrestamos(){

    int opcion;
    while(true)
    {
        system ("cls");
        cout<<"1-LISTAR PRESTAMOS:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS  :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
        cout<<"======================"<<endl;
        cout<<"SELECCIONAR UNA OPCION :";
        cin>>opcion;

        switch(opcion)
        {

        case 1:

            break;
        case 2:

            break;
    case 3:
           /// cargarPrestamos();
            break;
    case 4:
            break;
    case 0:
         menusocios();
    }


    }
    }
    void menuAutores(){

    int opcion;
    while(true)
    {
        system ("cls");
        cout<<"1-LISTAR AUTORES:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
         cout<<"======================"<<endl;
        cout<<"SELECCIONAR UNA OPCION :";
        cin>>opcion;

        switch(opcion)
        {

        case 1:




            break;
        case 2:



            break;

        case 3:
            break;

        case 4:



            break;
        case 0:
            menuPrestamos();
    }
    }
    }
    void menuMultas(){
    int opcion;
    while(true)
    {
        system ("cls");
        cout<<"1-LISTAR MULTAS:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
         cout<<"======================"<<endl;
        cout<<"SELECCIONAR UNA OPCION :";
        cin>>opcion;

        switch(opcion)
        {

        case 1:




            break;
        case 2:



            break;

        case 3:
            break;

        case 4:



            break;
        case 0:
            menuAutores();

    };
}

    }
    void menuGeneros(){

    int opcion;
    while(true) {

        system ("cls");
        cout<<"1-LISTAR GENEROS:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
         cout<<"======================"<<endl;
        cout<<"SELECCIONAR UNA OPCION :";
        cin>>opcion;

        switch(opcion)
        {

        case 1:




            break;
        case 2:



            break;

        case 3:
            break;

        case 4:



            break;
        case 0:
            menuMultas();



    }
    }
    }
