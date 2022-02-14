#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int contar=0;
    int n;

    for (int i = 0; i < 9; i++)
    {
        cout<<"=>"<<(i+1)<<" Ingrese un numero, si es 0 se termina"<<endl;
        cin >>n;
        if(n !=0){
            contar=contar+n;
            cout<<"La suma va en: "<<contar<<endl;
        }else{
            cout<<"A ingresado 0, finalizamos"<<endl;
            break;
        }
    
    }
    cout<<"La suma total es: "<<contar<<endl;
    return 0;
}