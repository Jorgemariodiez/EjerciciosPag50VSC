#include <string>
#include <iostream>
#include <math.h>

using namespace std;
int main(){
    string equipo[8];

    for(int i=0; i<8; i++){
        cout<<"Ingrese el nombre del equipo numero: "<<(i+1)<<endl;
        getline(std::cin, equipo[i]);
    }
    int cont=0;
    int ganador1[4];
    int pos=0;

    cout<<"Primera ronda:"<<endl;
    while(cont<7){
        cout<<"1. "<<equipo[cont]<<" 2. "<<equipo[cont+1]<<": "<<endl;
        int opcion;
        cin>>opcion;
        if(opcion==1)ganador1[pos]=cont;
        else ganador1[pos]=cont+1;

        cont+=2;
        pos++;
    }
    cont=0;
    pos=0;
    int ganador2[2];
    cout<<"Segunda ronda."<<endl;
    while(cont<3){
        cout<<" 1. "<<equipo[ganador1[cont]]<<" -2. "<<equipo[ganador2[cont+1]]<<endl;
        int opcion;
        cin>>opcion;
        if(opcion==1)ganador2[pos]=ganador1[cont];
        else ganador2[pos]=ganador1[cont+1];

        cont+=2;
        pos++;
    }
    cout<<"Tercera ronda. "<<endl;
    cout<<" 1. "<<equipo[ganador2[0]]<<" -2. "<<equipo[ganador2[1]]<<" : "<<endl;
    int opcion;
    cin >> opcion;
    int ganador;
    if(opcion==1)ganador=ganador1[0];
    else ganador=ganador2[1];
    
    cout<<" El finalmente ganador es "<<"!"<<equipo[ganador]<<"!";
    

    return 0;
    }