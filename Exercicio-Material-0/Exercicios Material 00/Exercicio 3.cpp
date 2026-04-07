#include <iostream>

using namespace std;

int main()
{
    float horas, salarioMinimo;
    float valorHora, salarioBruto, imposto, salarioFinal;

    cout<<"Digite as horas trabalhadas"<<endl;
    cin>>horas;

    cout<<"Digite o salario minimo:"<<endl;
    cin>>salarioMinimo;

    valorHora = salarioMinimo / 2;
    salarioBruto = horas * valorHora;
    imposto = salarioBruto * 0.03;
    salarioFinal = salarioBruto - imposto;

    cout<<"Valor da hora: "<<valorHora<<endl;
    cout<<"Salario Bruto: "<<salarioBruto<<endl;
    cout<<"Imposto: "<<imposto<<endl;
    cout<<"Salario a receber: "<<salarioFinal<<endl;

    return 0;
}

