#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Item {
    string prato;
    int qtd;
    float valor;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    vector<Item> listaPedidos;
    float parada = 0.0;

    cout << "Sistema de Pedidos"<<endl;
    cout << "Digite 0 no valor para encerrar."<<endl;

    Item aux;

    do {
        cout << "Nome do prato: ";
        getline(cin, aux.prato);

        cout << "Quantidade: ";
        cin >> aux.qtd;

        cout << "Valor total: ";
        cin >> aux.valor;

        cin.ignore();

        if (aux.valor != parada) {
            listaPedidos.push_back(aux);
        }

    } while (aux.valor != parada);

    cout <<endl<< "Pedidos registrados:"<<endl;

    for (int i = 0; i < listaPedidos.size(); i++) {
        cout << "Prato: " << listaPedidos[i].prato;
        cout << ", Qtd: " << listaPedidos[i].qtd;
        cout << ", Total: R$" << listaPedidos[i].valor <<endl;
    }

    return 0;
}
