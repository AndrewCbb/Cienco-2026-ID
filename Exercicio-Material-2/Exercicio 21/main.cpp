#include <iostream>

using namespace std;

enum Semana {
    SEG,
    TER,
    QUA,
    QUI,
    SEX,
    SAB,
    DOM
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    int valor;

    cout << "Informe um numero (1 a 7): ";
    cin >> valor;

    if (valor < 1 || valor > 7) {
        cout << "Valor invalido"<<endl;
        return 1;
    }

    Semana diaAtual = (Semana)(valor - 1);

    cout << "Dia escolhido: ";

    if (diaAtual == SEG) {
        cout << "segunda-feira.";
    }
    else if (diaAtual == TER) {
        cout << "terca-feira.";
    }
    else if (diaAtual == QUA) {
        cout << "quarta-feira.";
    }
    else if (diaAtual == QUI) {
        cout << "quinta-feira.";
    }
    else if (diaAtual == SEX) {
        cout << "sexta-feira.";
    }
    else if (diaAtual == SAB) {
        cout << "sabado.";
    }
    else {
        cout << "domingo.";
    }

    cout <<endl;

    return 0;
}
