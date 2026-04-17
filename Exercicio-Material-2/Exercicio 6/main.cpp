#include <iostream>

using namespace std;

struct Calendario
{
	int d;
	int m;
	int a;
};

int main ()
{
    setlocale(LC_ALL, "Portuguese");

	Calendario dataAtual;

	cout << "Informe o dia: ";
	cin >> dataAtual.d;

	cout << "Informe o mes: ";
	cin >> dataAtual.m;

	cout << "Informe o ano: ";
	cin >> dataAtual.a;

	cout << "Data atual: " << dataAtual.d << "/" << dataAtual.m << "/" << dataAtual.a <<endl;

	return 0;
}
