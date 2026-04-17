#include <iostream>

using namespace std;

#define MAX_DIAS 5

struct Registro {
    int numeroDia;
    float temp;
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    char resp = 's';

    while (resp == 's' || resp == 'S') {

        Registro dados[MAX_DIAS];
        int qtd = 0;

        while (true) {

            if (qtd == MAX_DIAS) {
                cout << "Limite atingido de " << MAX_DIAS << " dias."<<endl;
                break;
            }

            cout << "Informe a temperatura do dia " << qtd + 1 << ": ";
            cin >> dados[qtd].temp;

            dados[qtd].numeroDia = qtd + 1;

            qtd++;
        }

        cout <<endl<< "Temperaturas registradas:"<<endl;

        for (int i = 0; i < qtd; i++) {
            cout << "Dia " << dados[i].numeroDia;
            cout << " - Temp: " << dados[i].temp << "C"<<endl;
        }

        cout << "Registrar outro mes? (s/n): ";
        cin >> resp;

        cin.ignore();
        system("cls");
    }

    return 0;
}
