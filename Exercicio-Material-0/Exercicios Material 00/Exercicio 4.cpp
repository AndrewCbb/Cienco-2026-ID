#include <iostream>

using namespace std;

int main()
{
    float salario, novoSalario;

    cout<<"Digite o salario: ";
    cin>>salario;

    if(salario < 1000){
        novoSalario = salario * 1,15;
    }
    else if (salario <= 1500){
        novoSalario = salario * 1,10;
    }
    else{
        novoSalario = salario * 1,05;
    }

    cout<<"Novo salario é: "<<novoSalario<<endl;

    return 0;
}

