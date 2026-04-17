#include#include <iostream>

using namespace std;

struct Automovel {
    string fabricante;
    string descricao;
    int anoFab;
    string combustivel;
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    Automovel info;

    cout << "Informe a marca: ";
    getline(cin, info.fabricante);

    cout << "Informe o modelo: ";
    getline(cin, info.descricao);

    cout << "Informe o ano: ";
    cin >> info.anoFab;

    char escolha;
    cout << "Tipo (G-gasolina | D-diesel | E-eletrico): ";
    cin >> escolha;

    if (escolha == 'G' || escolha == 'g') {
        info.combustivel = "Gasolina";
    }
    else if (escolha == 'D' || escolha == 'd') {
        info.combustivel = "Diesel";
    }
    else if (escolha == 'E' || escolha == 'e') {
        info.combustivel = "Eletrico";
    }
    else {
        info.combustivel = "Indefinido";
    }

    cout << "Dados do veiculo: "<<endl;
    cout << info.fabricante << " " << info.descricao <<endl;
    cout << "Ano: " << info.anoFab <<endl;
    cout << "Combustivel: " << info.combustivel <<endl;

    return 0;
}
