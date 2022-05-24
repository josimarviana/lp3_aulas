#include <iostream>
using namespace std;

int imprimir(){
    cout << "Deu certo " << endl;
}
int main(int argc, char **argv){

    int numero=0;
    int numero2(1);
    int numero3{2};

    char letra = 'y';
    string palavra {"Josimar"};
    float numerocomvirgula = 4.6;

    std::cout << "O valor de x é " << palavra << endl;


    return 0;
}