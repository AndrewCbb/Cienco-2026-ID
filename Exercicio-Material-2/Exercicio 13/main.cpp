#include <iostream>
#include <cstdlib>

using namespace std;

struct Calendario {
	short d;
	short m;
	int a;
};

int main (){

	Calendario registro;
	Calendario *ptrData;

	ptrData = &registro;

	ptrData->d = 6;
	ptrData->m = 3;
	ptrData->a = 2026;

	cout << "Data salva:"<<endl;
	cout << ptrData->d << "/" << ptrData->m << "/" << ptrData->a <<endl;

	system("pause");
	return 0;
}
