#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "Ingresa 10 numeros, si alguno es cero se finaliza" << endl;
    int n;
    cin >> n;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    int i = 0;

    while(n != 0) {
        arr[i]=n;
        cout<<"Valor de arr(i) ahora: "<<arr[i]<<endl;
        cout<<" Ingresa otro numero: "<<endl;
        cin>>n;
        i++;
    }
    int sum = 0;
    for(int j=0; j < 9; j++){
        cout<<"Valor de j: "<<j<<" Valor de sum antes "<<sum<<endl;
        sum += arr[j];
        cout<<"Valot de arr(j): "<<arr[j]<<endl;
    }
    cout<<"La suma total es: "<<sum<<endl;
    return 0;
}