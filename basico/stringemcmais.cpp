#include <iostream>
using namespace std;

int main (int argc, char ** argv){
    string nomes[]={"one", "two", "three"};

    for (int i=0;i<3;i++){
        cout<< nomes[i] << endl;
    }
    
    string entrada;
    char palavra[10];
    string palavra2;
    cout << "Digite uma palavra para entrar: ";
   // cin.getline(palavra, 10); //quantidade definida
   // getline(cin, palavra); // maior capacidade
       cin >> palavra2;
    cout<< "A palavra digitada foi: " << palavra2 << endl;

    palavra2 = "Angelica";

    cout<< "A palavra mudou para: " << palavra2 << endl;

    return 0;
}