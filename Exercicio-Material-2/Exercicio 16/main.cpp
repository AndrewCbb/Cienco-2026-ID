#include <iostream>
#include <string>

using namespace std;

struct Local {
    string logradouro;
    string municipio;
    string codigoPostal;
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    Local dadosEndereco;

    cout << "Informe a rua: ";
    getline(cin, dadosEndereco.logradouro);

    cout << "Informe a cidade: ";
    getline(cin, dadosEndereco.municipio);

    cout << "Informe o CEP: ";
    getline(cin, dadosEndereco.codigoPostal);

    cout <<endl<< "Endereco informado:"<<endl;

    cout << "Rua: " << dadosEndereco.logradouro <<endl;
    cout << "Cidade: " << dadosEndereco.municipio <<endl;
    cout << "CEP: " << dadosEndereco.codigoPostal <<endl;

    return 0;
}
