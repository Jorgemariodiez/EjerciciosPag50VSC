#include <string>
#include <iostream>
#include <math.h>

using namespace std;

void repetidor (string s);

int main(){
    int ESO [4][3]={{0,0,0},{0,0,0},{0,0,0},{0,0,0}};

    int opcion = 0;
    while (opcion !=4){
        cout << "- 1 Ingresar alumno"<<endl;
        cout << "- 2 Eliminar alumno"<<endl;
        cout << "- 3 Alumnos en clase"<<endl;
        cout << "- 4 Salir terminar"<<endl;
        
        cin >> opcion;
        switch (opcion){
            case 1: cout<<"Ingresar el cursor"<<endl;   
                    int ingresaCurso;
                    cin>>ingresaCurso;
                    cout<<"ingresar la clase asi A=1, B=2, C=3"<<endl;
                    int ingresarClase;
                    cin>>ingresarClase;
                    ESO[ingresaCurso][ingresarClase]++;
                break;
            case 2: cout<<"Ingresar el cursor"<<endl;
                    int eliminarCurso;
                    cin>>eliminarCurso;
                    cout<<"ingresar la clase asi A=1, B=2, C=3"<<endl;
                    int eliminarClase;
                    cin>>eliminarClase;
                    if(ESO[eliminarCurso][eliminarClase]>0){
                        ESO[eliminarCurso][eliminarClase]--;       

                    }else{
                        cout<<"No se puede eliminar, porque ya no hay mas"<<endl;
                    }
                break;
            case 3: cout<<"Primero elejir el cursor"<<endl;
                    int infoCurso;
                    cin >> infoCurso;
                    cout<<"ingresar la clase asi A=1, B=2, C=3"<<endl;
                    int infoClase;
                    cin>>infoClase;
                    cout <<ESO[infoCurso][infoClase]<<" alumnos"<<endl;
                break;
            case 4: cout<<"Salir del sistema"<<endl;
                break;
            default: cout<<"Opcion no valida"<<endl;       
        }
        
    }
    return 0;
}