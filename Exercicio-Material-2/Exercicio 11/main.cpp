#include <iostream>
#include <string>

using namespace std;

struct Estudante {
    string nomeEstudante;
    float valorNota;
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    Estudante dados;
    char opcao = 's';

    while (opcao == 's' || opcao == 'S') {

        cout << "Informe o nome: ";
        getline(cin, dados.nomeEstudante);

        cout << "Informe a nota: ";
        cin >> dados.valorNota;

        cout << "Registro -> ";
        cout << dados.nomeEstudante << " : " << dados.valorNota <<endl;

        cout << "Continuar? (s/n): ";
        cin >> opcao;

        cin.ignore();
    }

    return 0;
}
