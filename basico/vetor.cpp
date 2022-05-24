#include <iostream>
using namespace std;

int alteravalor(string v[]){
    v[0] = "four";
    return 0;
}

int main (int argc, char **argv){
    string vetor[3]={"one", "two", "three"};
    alteravalor(vetor);
    cout << vetor[0] << endl;



    return 0;
}