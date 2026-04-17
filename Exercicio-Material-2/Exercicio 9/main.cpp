#include <iostream>

using namespace std;

#define LIMITE 2

struct Obra {
    string nomeLivro;
    string escritor;
    int ano;
    string status;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Obra lista[LIMITE];
    int contador = 0;
    char opc = 's';

    while (opc == 's' || opc == 'S') {

        cout << "Informe o titulo: ";
        getline(cin, lista[contador].nomeLivro);

        cout << "Informe o autor: ";
        getline(cin, lista[contador].escritor);

        cout << "Informe o ano: ";
        cin >> lista[contador].ano;

        char resp;
        cout << "Esta disponivel? (s/n): ";
        cin >> resp;

        if (resp == 's' || resp == 'S') {
            lista[contador].status = "Sim";
        } else {
            lista[contador].status = "Nao";
        }

        contador++;

        cout << "Continuar cadastro? (s/n): ";
        cin >> opc;

        cin.ignore();
    }

    cout <<endl<< "--- Livros Registrados ---"<<endl;

    for (int i = 0; i < LIMITE; i++) {
        cout << "Item " << i + 1 << ":" <<endl;
        cout << "Titulo: " << lista[i].nomeLivro <<endl;
        cout << "Autor: " << lista[i].escritor <<endl;
        cout << "Ano: " << lista[i].ano <<endl;
        cout << "Disponivel: " << lista[i].status <<endl;
        cout << "--------------------------"<<endl;
    }

    return 0;
}
