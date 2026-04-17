#include <iostream>

using namespace std;

struct Usuario
{
    string nomeUsuario;
    int anos;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Usuario dados;

    cout << "Digite seu nome: ";
    getline(cin, dados.nomeUsuario);

    cout << "Digite sua idade: ";
    cin >> dados.anos;

    cout << "Nome informado: " << dados.nomeUsuario <<endl;
    cout << "Idade informada: " << dados.anos << " anos"<<endl;

    return 0;
}
