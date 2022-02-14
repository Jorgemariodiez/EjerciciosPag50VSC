#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout<<"Introduce una frase: "<<endl;
    string s;
    getline(std::cin, s);
    int contador = 0;

    for(int i=0; i< s.length(); i++){
        if(s[i] != ' '){
            contador++;
        }
    }
    cout<<contador;
    return 0;
}