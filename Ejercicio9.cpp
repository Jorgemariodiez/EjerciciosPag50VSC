#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){  
    cout<<"Ingrese un numero: "<<endl;
    int num;
    cin>>num;
    int i=1;
    
    bool esPrimo = true;
    while (i <= num && esPrimo)
    {
        if((i != 1 && i !=num) && (num % i == 0)){
            esPrimo = false;
            cout<<num<<" El numero no es primo"<<endl;
        }
        i++;
     }
    
    if(esPrimo){
        cout <<num<<" Es numero primo"<<endl;
    }
    return 0;
}