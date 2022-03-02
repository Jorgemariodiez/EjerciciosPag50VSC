#include <string>
#include <iostream>
#include <math.h>

using namespace std;

void ingresarLibro(int, string, string, int);
void listarLibrosBiblio(int);
void modificarLibros(int, string,string);
void librosMas100Pag(int);
void listaLibrosEnPresta(int);
void prestarLibro(int,string,int,int,int);

struct Director{
    string name;
    string apellido;
    string dni;
};
struct Fecha{
    int day;
    int month;
    int year;
};
struct Libro{
    string titulo="";
    string autor="";
    int paginas =0;
    Fecha fechaPrestamo;
};
struct Biblioteca{ 
    string titulo="";
    string direccion="";
    int numDireccion=0;
    Director director;
    Libro libro[100]={};
    int contLibros = 0;
};
Biblioteca bib1, bib2, bib3;

int main(){
    int opcion=0;

    while(opcion !=7){
        cout<<"1- Ingresar libro a la biblioteca"<<endl;
        cout<<"2- Listado de titulos de una biblioteca"<<endl;
        cout<<"3- Modificar titulo de un libro a la biblioteca"<<endl;
        cout<<"4- Listar titulos de libros con mas de 100 paginas"<<endl;
        cout<<"5- Mostrar libros en prestamos"<<endl;
        cout<<"6- Prestar un libro"<<endl;
        cout<<"7- Salir"<<endl;

        cin>>opcion;

        switch(opcion){
            case 1{
                cout<<"Numero de la biblioteca"<<endl;
                int numBibAgregar;
                cin>>numBibAgregar;
                cin.ignore();
                cout<<"Titulo del libro"<<endl;
                string tituloLibroAgregar;
                getline(std::cin, tituloLibroAgregar);
                cout<<"Autor del libro"<<endl;
                string nomAutor;
                getLine(std::cin, nomAutor);
                cout<<"Total paginas del libro"<<endl;
                int numPags;
                cin.ignore();
                ingresarLibro(numBibAgregar, tituloLibroAgregar,nomAutor,numPags);
            }
            break;

            case 2: {
                cout<<"Numero de la biblioteca"<<endl;
                int numBibLista;
                cin>>numBibLista;
                cin.ignore();
                listarLibrosBiblio(numBibLista);
            } 
            break;

            case 3:{
                cout<<"Numero de la biblioteca"<<endl;
                int numBibMod;
                cin>>numBibMod;
                cin.ignore();
                cout<<"Titulo del libro"<<endl;
                string tituloLibroMod;
                getline(std::cin, tituloLibroMod);
                cout<<"nuevo Titulo del libro: "<<endl;
                string newTituloLibroMod;
                getline(std::cin, newTituloLibroMod);
                modificarLibro(numBibMod, tituloLibroMod, newTituloLibroMod);
            }
            break;

            case 4: {
                cout<<"Nuemro de la biblioteca: "<<endl;
                int numBib100pags;
                cin >> numBib100pags;
                cin.ignore();
                librosMas100Pag(numBib100pags);
            }
            break;

            case 5: {
                
            }
    }
    
    return 0;
}

