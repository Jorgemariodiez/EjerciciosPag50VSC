#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int sumarDos (int x, int y){
    return x+y;
}
int main(){
    int x,y;
    cin >> x;
    cin >> y;
    cout << sumarDos(x,y) << endl;
    return 0;
}
