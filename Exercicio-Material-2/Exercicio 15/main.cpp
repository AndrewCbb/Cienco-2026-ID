#include <iostream>
#include <string>

using namespace std;

struct Pet {
    string apelido;
    string tipo;
    int anosVida;
    float massa;
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    Pet listaPets[10];

    int i = 0;
    while (i < 10) {

        cout << "Registro " << i + 1 << ":"<<endl;

        cout << "Nome: ";
        getline(cin, listaPets[i].apelido);

        cout << "Tipo: ";
        getline(cin, listaPets[i].tipo);

        cout << "Idade: ";
        cin >> listaPets[i].anosVida;

        cout << "Peso: ";
        cin >> listaPets[i].massa;

        cin.ignore();

        i++;
    }

    cout <<endl<< "Lista de animais:"<<endl;

    for (int j = 0; j < 10; j++) {
        cout << "Animal " << j + 1 << ":"<<endl;
        cout << "Nome: " << listaPets[j].apelido <<endl;
        cout << "Tipo: " << listaPets[j].tipo <<endl;
        cout << "Idade: " << listaPets[j].anosVida << " anos"<<endl;
        cout << "Peso: " << listaPets[j].massa << " kg"<<endl<<endl;
    }

    return 0;
}
