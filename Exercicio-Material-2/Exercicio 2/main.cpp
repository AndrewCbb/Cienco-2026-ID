#include <iostream>
#include <string>

using namespace std;

struct Livro {
    string titulo;
    string escritor;
    int anoPublicacao;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Livro livro;
    string tituloParada = "Fim";

    do {
        cout << "Digite o titulo do livro: ";
        getline(cin, livro.titulo);
        if (livro.titulo == tituloParada) {
            break;
        }
        cout << "Digite o nome do escritor do livro: ";
        getline(cin, livro.escritor);
        cout << "Digite o ano de publica��o: ";
        cin >> livro.anoPublicacao;
        cin.ignore();

        cout << "Livro: " << livro.titulo << ", Autor: " << livro.escritor << ", Ano: " << livro.anoPublicacao << endl;

    } while (true);

    return 0;
}
