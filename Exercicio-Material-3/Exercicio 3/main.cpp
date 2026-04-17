#include#include <iostream>

using namespace std;

void exibir(int v[]) {
    cout <<endl;
    for (int i = 0; i < 5; i++) {
        cout << "[" << v[i] << "]";
    }
    cout <<endl;
}

void ordenarLista(int v[]) {

    int contador = 1;
    int houveTroca = 1;
    int temp;

    while (contador <= 5 && houveTroca == 1) {

        houveTroca = 0;

        for (int pos = 0; pos < 4; pos++) {

            if (v[pos] > v[pos + 1]) {

                houveTroca = 1;

                temp = v[pos];
                v[pos] = v[pos + 1];
                v[pos + 1] = temp;
            }
        }

        contador++;
    }
}

int main() {

    int lista[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite um valor:"<<endl;
        cin >> lista[i];
    }

    exibir(lista);

    ordenarLista(lista);

    exibir(lista);

    return 0;
}
