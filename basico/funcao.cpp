#include <iostream>
#include "soma.h"

using namespace std;




int soma(int, int);


int main (int argc, char **argv){
    int x, y;
    cout << "Digite o primeiro número: ";
    cin >> x;

    cout << "Digite o segundo número: ";
    cin >> y;

    cout << "A soma dos dois números é igual a: " << soma(x,y) << endl;

    int t;
    
    return 0;
}