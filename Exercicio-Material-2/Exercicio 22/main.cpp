#include <iostream>

using namespace std;

struct DataInfo {
	int d;
	int m;
	int a;
};

struct PessoaData {
	string nomePessoa;
	DataInfo dataNasc;
};

int main ()
{
    setlocale(LC_ALL, "Portuguese");

	PessoaData registro;

	cout << "Informe o nome:"<<endl;
	getline(cin, registro.nomePessoa);

	cout << "Dia de nascimento:"<<endl;
	cin >> registro.dataNasc.d;

	cout << "Mes de nascimento:"<<endl;
	cin >> registro.dataNasc.m;

	cout << "Ano de nascimento:"<<endl;
	cin >> registro.dataNasc.a;

	system("cls");

	cout << registro.nomePessoa <<endl;
	cout << "Data: ";
	cout << registro.dataNasc.d << "/";
	cout << registro.dataNasc.m << "/";
	cout << registro.dataNasc.a <<endl;

	return 0;
}
