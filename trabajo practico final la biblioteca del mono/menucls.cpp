#include <iostream>
#include "menu.cls.h"
#include "clsFecha.h"

using namespace std;


void menuprincipal()
{
    int opcion;
    while(true)
    {
        system("cls");
        cout<<"=============================="         <<endl;
        cout<<"         MENU PRINCIPAL"                <<endl;
        cout<<"=============================="         <<endl;
        cout<<"1- libros :"<<endl;
        cout<<"2- socios :"<<endl;
        cout<<"3- prestamos :"<<endl;
        cout<<"4- autores :"<<endl;
        cout<<"5- multas :"<<endl;
        cout<<"6- generos :"<<endl;
        cout<<"0- salir :"<<endl;
        cout<<"SELECCIONAR UNA OPCION :";
        cin>>opcion;
        system("pause");
        switch(opcion)
        {
        case 1:
            menulibros();
            break;
        case 2:
            menusocios();
            break;
        case 3:
           /// menuprestamos();
            break;
        case 4:
            ///menuautores();
            break;
        case 5:
           /// menumultas();
            break;
        case 6:
          ///  menugeneros();
            break;
        case 0:
            break;



        }

    }
}
void menulibros()
{
    int opcion;
    while(true)
    {
        system ("cls");
        cout<<"1-LISTAR:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
        cout<<"SELECCIONAR UNA OPCION";
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
        cout<<"1-LISTAR:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS  :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
        cout<<"SELECCIONAR UNA OPCION";
        cin>>opcion;

        switch(opcion)
        {

        case 1:
            break;
        case 2:
            break;
    case 3:
            cargarSocio();
            break;
    case 4:
            break;
    case 0:
            break;

        }
    }
    void menuPrestamos(){

    int opcion;
    while(true)
    {
        system ("cls");
        cout<<"1-LISTAR:"<<endl;
        cout<<"2-MODIFICAR REGISTROS:"<<endl;
        cout<<"3-AGREGAR REGISTROS  :"<<endl;
        cout<<"4-ELIMINAR REGISTROS :"<<endl;
        cout<<"0-VOLVER AL ANTERIOR :"<<endl;
        cout<<"SELECCIONAR UNA OPCION";
        cin>>opcion;

        switch(opcion)
        {

        case 1:

            break;
        case 2:

            break;
    case 3:
            cargarPrestamos();
            break;
    case 4:
            break;
    case 0:
            break;
    }


