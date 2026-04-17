#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Aluno {
    string nomeAluno;
    float mediaFinal;
    bool status;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    vector<Aluno> lista;
    char opcao = 's';

    while (opcao == 's' || opcao == 'S') {
        Aluno dados;

        cout << "Informe o nome do aluno: ";
        getline(cin, dados.nomeAluno);

        cout << "Informe a nota final: ";
        cin >> dados.mediaFinal;

        if (dados.mediaFinal >= 6.0) {
            dados.status = true;
        } else {
            dados.status = false;
        }

        lista.push_back(dados);

        if (dados.status) {
            cout << dados.nomeAluno << " foi aprovado(a)." <<endl;
        } else {
            cout << dados.nomeAluno << " foi reprovado(a)." <<endl;
        }

        cout << "Deseja cadastrar outro aluno? (s/n): ";
        cin >> opcao;
        cin.ignore();
    }

    cout <<endl<< "Lista de Alunos:"<<endl;

    for (int i = 0; i < lista.size(); i++) {
        cout << "Nome: " << lista[i].nomeAluno;
        cout << ", Nota: " << lista[i].mediaFinal;
        cout << ", Situacao: ";

        if (lista[i].status) {
            cout << "Aprovado"<<endl;
        } else {
            cout << "Reprovado"<<endl;
        }
    }

    return 0;
}
