#include <iostream>
#include <string>

using namespace std;

struct Individuo {
    string nomePessoa;
    int anos;
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    Individuo dados;

    cout << "Informe o nome: ";
    getline(cin, dados.nomePessoa);

    cout << "Informe a idade: ";
    cin >> dados.anos;

    cout << "Dados: ";
    cout << dados.nomePessoa << " - " << dados.anos << " anos"<<endl;

    return 0;
}
