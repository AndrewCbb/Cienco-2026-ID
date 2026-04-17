#include <iostream>

#define TAMANHO 10

using namespace std;

void mostrar(int lista[]) {
    cout <<endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "[" << lista[i] << "]";
    }
    cout <<endl;
}

void ordenar(int lista[]) {
    int i, j, temp;

    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = i + 1; j < TAMANHO; j++) {

            if (lista[i] > lista[j]) {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }

        }
    }
}

int main() {

    int dados[TAMANHO] = {10,9,8,7,6,5,4,3,2,1};

    mostrar(dados);
    ordenar(dados);
    mostrar(dados);

    return 0;
}
