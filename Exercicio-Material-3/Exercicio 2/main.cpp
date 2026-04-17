#include <iostream>

using namespace std;

void mostrarVetor(int v[]) {
    cout <<endl;
    for (int i = 0; i < 5; i++) {
        cout << "[" << v[i] << "]";
    }
    cout <<endl;
}

void ordenarCrescente(int v[]) {

    int troca;

    for (int etapa = 1; etapa < 5; etapa++) {

        for (int pos = 4; pos >= etapa; pos--) {

            if (v[pos] < v[pos - 1]) {

                troca = v[pos];
                v[pos] = v[pos - 1];
                v[pos - 1] = troca;
            }
        }
    }
}

int main() {

    int valores[5];

    int i = 0;
    while (i < 5) {
        cout << "Digite um valor:"<<endl;
        cin >> valores[i];
        i++;
    }

    mostrarVetor(valores);

    ordenarCrescente(valores);

    mostrarVetor(valores);

    return 0;
}
