#include <iostream>

using namespace std;

#define TAM 5

int main() {

    setlocale(LC_ALL, "Portuguese");

    int valores[TAM];

    cout << "Informe " << TAM << " numeros:"<<endl;

    int i = 0;
    while (i < TAM) {
        cin >> valores[i];
        i++;
    }

    cout <<endl<< "Elementos digitados:"<<endl;

    for (int j = 0; j < TAM; j++) {
        cout << valores[j] << " ";
    }

    cout <<endl;

    return 0;
}
