#include <string>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    cout << "Ingresa numero hasta completar 10 y si ingresa un 0 se termina."<<endl;
    int n;
    cin>>n;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int i = 0;

    while(n !=0){
        arr[i] =n;
        cout<<"Ingrese otro numero: "<<endl;
        cin>>n;
        i++;

    }
    int mayor =arr[0];
    for(int j=0; j<9;j++){
        if(arr[j]>mayor){
            mayor = arr[j];
        }
    }
    cout<<"El mayor es: "<<mayor<<endl;
    return 0;
}