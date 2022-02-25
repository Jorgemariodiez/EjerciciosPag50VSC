#include <string>
#include <iostream>
#include <math.h>

using namespace std;

void aumentarNumero(int &);

int main(){

     struct fechaNacimiento {
            int day;
            int mounth;
            int year;
        };

    struct datosPersona
    {
        string nombre;
        string apellido;
        string cedula;
        int edad;
        double peso;
        double estatura;
        bool esHombre;
       fechaNacimiento cumple;
    };
   
    datosPersona persona[3];

    persona[0].nombre = "Jorge Mario";
    persona[0].apellido = "Diez Aranzazu";
    persona[0].cedula = "71613967";
    persona{0}.edad = 59;
    persona[0].estatura = 1.74;
    persona[0].esHombre = true;
    persona[0].cumple.day = 3;
    persona[0].cumple.mounth = 5;
    persona[0].cumple.year = 1962;
    persona[1].nombre = "Alfonso";
    persona[1].apellido = "Diez Uribe";
    persona[1].cedula = "3500527";
    persona{1}.edad = 82;
    persona[1].estatura = 1.65;
    persona[1].esHombre = true;
    persona[1].cumple.day = 8;
    persona[1].cumple.mounth = 5;
    persona[1].cumple.year = 1934;
    persona[2].nombre = "Elena";
    persona[2].apellido = "Aranzazu Mejia";
    persona[2].cedula = "21979738";
    persona{2}.edad = 80;
    persona[2].estatura = 1.66;
    persona[2].esHombre = false;
    persona[2].cumple.day = 18;
    persona[2].cumple.mounth = 12;
    persona[2].cumple.year = 1936;
    
    return 0;    
}