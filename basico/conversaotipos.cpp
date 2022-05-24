#include <iostream>

int main (int argc, char **argv){
    float fracao = 3.14;

    int numero = (int) fracao;
    numero = int(fracao);
    numero = static_cast<int> (fracao);

    printf("%d ", numero);

    return 0;
}