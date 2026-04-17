#include <iostream>
#include <string>

using namespace std;

struct Paciente {
    string nome;
    int idade;
    string sintomas;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Paciente paciente;
    char continuidade = 's';

    while (continuidade == 's' || continuidade == 'S') {
        cout << "Digite o nome do paciente: ";
        getline(cin, paciente.nome);
        cout << "Digite a idade do paciente: ";
        cin >> paciente.idade;
        cin.ignore();
        cout << "Digite o sintoma do paciente: ";
        getline(cin, paciente.sintomas);

        cout << "Nome: " << paciente.nome << ", Idade: " << paciente.idade << ", Sintoma: " << paciente.sintomas << endl;

        cout << "Deseja adicionar outro paciente? (s/n): ";
        cin >> continuidade;
        cin.ignore();
    }

    return 0;
}
