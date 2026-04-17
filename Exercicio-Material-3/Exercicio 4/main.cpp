#include <iostream>

using namespace std;

void mostrarValores(int v[]) {
    cout <<endl;
    for (int i = 0; i < 5; i++) {
        cout << "[" << v[i] << "]";
    }
    cout <<endl;
}

void ordenarDecrescente(int v[]) {

    int passo = 1;
    int mudou = 1;
    int aux;

    while (passo <= 5 && mudou == 1) {

        mudou = 0;

        for (int i = 0; i < 4; i++) {

            if (v[i] < v[i + 1]) {

                mudou = 1;

                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }

        passo++;
    }
}

int main() {

    int numeros[5];

    int i = 0;
    while (i < 5) {
        cout << "Digite um valor:"<<endl;
        cin >> numeros[i];
        i++;
    }

    mostrarValores(numeros);

    ordenarDecrescente(numeros);

    mostrarValores(numeros);

    return 0;
}
