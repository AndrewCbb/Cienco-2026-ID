#include <iostream>

using namespace std;

enum Paleta {
    RED,
    GREEN,
    BLUE
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    Paleta cor;
    int opcao;

    cout << "Digite uma opcao (0-vermelho | 1-verde | 2-azul): ";
    cin >> opcao;

    if (opcao < 0 || opcao > 2) {
        cout << "Opcao invalida"<<endl;
        return 1;
    }

    cor = (Paleta) opcao;

    cout << "Cor selecionada: ";

    if (cor == RED) {
        cout << "Vermelho";
    }
    else if (cor == GREEN) {
        cout << "Verde";
    }
    else {
        cout << "Azul";
    }

    cout <<endl;

    return 0;
}
