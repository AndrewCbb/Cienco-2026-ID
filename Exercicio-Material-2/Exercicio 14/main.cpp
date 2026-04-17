#include <iostream>
#include <string>

using namespace std;

struct Cadastro {
    string nomeCompleto;
    string local;
    string documento;
    int anos;
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    Cadastro lista[5];

    int i = 0;
    while (i < 5) {

        cout << "Informe o nome " << i + 1 << ": ";
        getline(cin, lista[i].nomeCompleto);

        cout << "Informe o endereco " << i + 1 << ": ";
        getline(cin, lista[i].local);

        cout << "Informe o CPF " << i + 1 << ": ";
        cin >> lista[i].documento;

        cout << "Informe a idade " << i + 1 << ": ";
        cin >> lista[i].anos;

        cin.ignore();

        i++;
    }

    cout <<endl<< "Dados cadastrados:"<<endl;

    for (int j = 0; j < 5; j++) {
        cout << "Registro " << j + 1 << ":"<<endl;
        cout << "Nome: " << lista[j].nomeCompleto <<endl;
        cout << "Endereco: " << lista[j].local <<endl;
        cout << "CPF: " << lista[j].documento <<endl;
        cout << "Idade: " << lista[j].anos << " anos"<<endl<<endl;
    }

    return 0;
}
