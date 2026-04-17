#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    int idade;
    float renda, valor;
    char doenca, fumante;

    cout << "Idade:"<<endl;
    cin >> idade;

    cout << "Possui doenca? (s/n):"<<endl;
    cin >> doenca;

    cout << "Fumante? (s/n):"<<endl;
    cin >> fumante;

    cout << "Renda:"<<endl;
    cin >> renda;

    if (idade <= 18) valor = 100;
    else if (idade <= 40) valor = 180;
    else if (idade <= 60) valor = 300;
    else valor = 500;

    if (doenca == 's' || doenca == 'S') {
        if (idade < 40) valor += valor * 0.3;
        else valor += valor * 0.5;
    }

    if (fumante == 's' || fumante == 'S') {
        if (idade <= 50) valor += valor * 0.2;
        else valor += valor * 0.4;
    }

    if (renda < 2000) valor -= valor * 0.2;
    else if (renda <= 5000) valor -= valor * 0.1;

    cout << "Valor final: " << valor <<endl;

    return 0;
}
