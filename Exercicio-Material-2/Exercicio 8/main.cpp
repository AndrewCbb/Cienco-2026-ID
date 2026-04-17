#include <iostream>

using namespace std;

struct Veiculo {
    string fabricante;
    string tipo;
    int anoFabricacao;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Veiculo dadosCarro;

    cout << "Informe a marca: ";
    getline(cin, dadosCarro.fabricante);

    cout << "Informe o modelo: ";
    getline(cin, dadosCarro.tipo);

    cout << "Informe o ano: ";
    cin >> dadosCarro.anoFabricacao;

    cout << "Dados do veiculo: ";
    cout << dadosCarro.fabricante << " " << dadosCarro.tipo;
    cout << ", Ano: " << dadosCarro.anoFabricacao <<endl;

    return 0;
}
