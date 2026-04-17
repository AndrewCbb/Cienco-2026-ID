#include <iostream>

using namespace std;

#define TAM 10

void mostrar(int v[]) {
    cout <<endl;
    for (int i = 0; i < TAM; i++) {
        cout << "[" << v[i] << "]";
    }
    cout <<endl;
}

void ordenar(int v[]) {
    int troca = 1;
    int aux;

    while (troca == 1) {
        troca = 0;

        for (int i = 0; i < TAM - 1; i++) {

            if (v[i] > v[i + 1]) {

                troca = 1;

                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numeros[TAM];

    int i = 0;
    while (i < TAM) {
        cout << "Digite um numero:"<<endl;
        cin >> numeros[i];
        i++;
    }

    mostrar(numeros);

    ordenar(numeros);

    cout <<endl<< "Vetor ordenado:"<<endl;
    mostrar(numeros);

    int menor = numeros[0];
    int maior = numeros[TAM - 1];

    int contMenor = 0;
    int contMaior = 0;

    for (int j = 0; j < TAM; j++) {

        if (numeros[j] == menor) {
            contMenor++;
        }

        if (numeros[j] == maior) {
            contMaior++;
        }
    }

    cout << "Menor valor: " << menor <<endl;
    cout << "Quantidade: " << contMenor <<endl;

    cout << "Maior valor: " << maior <<endl;
    cout << "Quantidade: " << contMaior <<endl;

    return 0;
}
