#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include<time.h>
#include "Persona.h"
#include "Libro.h"

using namespace std;

Libro registrar(){
    /*DATOS DEL LIBRO*/
    char titulo[100];
    char nombres[100];
    char apellidos[100];
    char nacionalidad[100];
    int annio;
    char genero[100];
    char editorial[100];
    char isbn[100];
    /*DATOS DEL LIBRO*/

    cout << "Ingrese el titulo del libro"<<endl;
    cin >> titulo;
    cout << "Ingrese le nombre del autor"<<endl;
    cin >> nombres;
    cout << "Ingrese los apellidos del autor"<<endl;
    cin >> apellidos;
    cout << "Nacionalidad del autor"<< endl;
    cin >> nacionalidad;
    cout << "Annio del libro"<<endl;
    cin >> annio;
    cout << "Genero del libro"<<endl;
    cin >> genero;
    cout << "Editorial del libro"<<endl;
    cin >> editorial;
    cout << "ISBN del libro"<<endl;
    cin >> isbn;
    Persona autor =Persona(nombres,apellidos,nacionalidad);
    Libro nuevo = Libro(titulo,autor,annio,genero,editorial,isbn);
    return nuevo;
}

void menu(){
    cout << "<========= MENU ==============>"<<endl;
    cout << "<=== 1.- Registrar libro =====>"<<endl;
    cout << "<=== 2.- Editar libro ========>"<<endl;
    cout << "<=== 3.- Eliminar libro ======>"<<endl;
    cout << "<=== 4.- Consultar autor =====>"<<endl;
    cout << "<=== 5.- Detalles de libro ===>"<<endl;
    cout << "<=============================>"<<endl;
}

int main(){
    Libro libros[10];
    bool power = true;
    int op = 0, librosC = 0, noBook = 0, imc;

    while (power){
        menu();
        cin >> op;

        switch (op) {
            case 1:

                libros[librosC] = registrar();
                librosC++;

                break;
            case 2:
                cout << "Ingrese el numero del libro"<<endl;
                cin >> noBook;

                libros[noBook].toString();

                libros[noBook] = registrar();
s
                break;
            case 3:
                cout << "Ingrese el numero de libro"<<endl;
                cin >> noBook;

                libros[noBook].toString();
                libros[noBook] = Libro();
                cout << "Libro eliminado"<<endl;

                break;
            case 4:
                cout << "Ingrese el numero del libro"<<endl;
                cin >> noBook;

                libros[noBook].getAutor();

                break;

            case 5:
                cout << "Ingrese el numero de libro"<<endl;
                cin >> noBook;

                libros[noBook].toString();
                break;
            default:
                power = false;
                break;
        }
    }

    return 0;
}