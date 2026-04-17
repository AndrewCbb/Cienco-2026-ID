#include <iostream>
#include <vector>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    int qtd;

    cout << "Informe o tamanho: ";
    cin >> qtd;

    vector<int> lista(qtd);

    int i = 0;
    while (i < qtd) {
        cout << "Digite o valor "<< i + 1 << ": ";
        cin >> lista[i];
        i++;
    }

    cout <<endl<< "Valores informados:"<<endl;

    for (int j = 0; j < lista.size(); j++) {
        cout << lista[j] <<endl;
    }

    return 0;
}
