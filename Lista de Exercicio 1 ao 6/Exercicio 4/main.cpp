#include <iostream>
using namespace std;

int main() {

    float saldo = 1000, valor;
    int op;
    float totalDep=0, totalSaq=0;
    int cont=0;
    float maiorDep=0, maiorSaq=0;

    while (true) {

        cout << "1-Deposito 2-Saque 3-Consulta 4-Relatorio 0-Sair"<<endl;
        cin >> op;

        if (op == 0) break;

        if (op == 1) {
            cin >> valor;
            if (valor > 0) {
                saldo += valor;
                totalDep += valor;
                if (valor > maiorDep) maiorDep = valor;
            }
        }

        else if (op == 2) {
            cin >> valor;
            if (valor > saldo) cout << "Saldo insuficiente"<<endl;
            else {
                saldo -= valor;
                totalSaq += valor;
                if (valor > maiorSaq) maiorSaq = valor;
            }
        }

        else if (op == 3) {
            cout << "Saldo: " << saldo <<endl;
        }

        else if (op == 4) {
            cout << "Depositos: " << totalDep <<endl;
            cout << "Saques: " << totalSaq <<endl;
            cout << "Operacoes: " << cont <<endl;
        }

        cont++;
    }

    return 0;
}
