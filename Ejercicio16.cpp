#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "Ingrese una palabra: " << endl;
    string s;
    getline(std::cin, s);
    int contarA=0;

    for(int i=0; i < s.length(); i++){
        if(s[i] == 'a'){
            contarA++;
        }
    }
    cout << "las letras a son: " <<contarA << endl;
    return 0;
}
