#include <iostream>
#include <string>

using namespace std;

struct AvaliacaoFilme {
    string titulo;
    int enredo;
    int atuacao;
    int efeitosEspeciais;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    AvaliacaoFilme filme;
    char continuar = 's';
    int totalFilme = 0;
    double somaEnredo = 0;
    double somaAtuacao = 0;
    double somaEfeitosEspeciais = 0;

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o titulo do filme: ";
        getline(cin, filme.titulo);
        cout << "Avalie o enredo do filme (1 a 5): ";
        cin >> filme.enredo;
        cout << "Avalie a atuação no filme (1 a 5): ";
        cin >> filme.atuacao;
        cout << "Avalie os efeitos especiais do filme (1 a 5): ";
        cin >> filme.efeitosEspeciais;
        cin.ignore();

        totalFilme++;
        somaEnredo += filme.enredo; // somaEnredo = somaEnredo + filme.enredo
        somaAtuacao += filme.atuacao;
        somaEfeitosEspeciais += filme.efeitosEspeciais;

        cout << "Filme: " << filme.titulo << "\nEnredo: " << filme.enredo << "\nAtuação: " << filme.atuacao << "\nEfeitos Especiais: " << filme.efeitosEspeciais << endl;

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    if (totalFilme > 0) {
        double mediaEnredo = somaEnredo / totalFilme;
        double mediaAtuacao = somaAtuacao / totalFilme;
        double mediaEfeitosEspeciais = somaEfeitosEspeciais / totalFilme;

        cout << "Media das Avaliações:" << endl;
        cout << "\nEnredo: " << mediaEnredo << "\nAtuação: " << mediaAtuacao << "\nEfeitos Especiais: " << mediaEfeitosEspeciais << endl;
    } else {
        cout << "Nenhum filme avaliado." << endl;
    }

    return 0;
}
