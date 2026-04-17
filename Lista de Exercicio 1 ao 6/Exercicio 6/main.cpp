#include <iostream>
using namespace std;

struct Func {
    int id;
    string nome;
    float salario;
    int idade;
    int tempo;
};

int main() {

    int n;
    cin >> n;

    Func f[50];

    for (int i=0;i<n;i++) {
        cin >> f[i].id;
        cin >> f[i].nome;
        cin >> f[i].salario;
        cin >> f[i].idade;
        cin >> f[i].tempo;
    }

    float soma=0;
    float maior=0, menor=999999;

    for (int i=0;i<n;i++) {
        soma += f[i].salario;
        if (f[i].salario > maior) maior = f[i].salario;
        if (f[i].salario < menor) menor = f[i].salario;
    }

    float media = soma/n;

    cout << "Media: " << media <<endl;
    cout << "Maior: " << maior <<endl;
    cout << "Menor: " << menor <<endl;

    return 0;
}
