
#include <iostream>

using namespace std;

int main()
{
    int numeroAluno, numeroMaisAlto, numeroMaisBaixo;
    float altura, maiorAltura, menorAltura;

    for(int i = 1; i<=10; i++){
        cout<<"Digite o numero de aluno: ";
        cin>>numeroAluno;

        cout<<"Digite a altura do aluno: ";
        cin>>altura;

        if(int i = 1){
            maiorAltura = altura;
            menorAltura = altura;
            numeroMaisAlto = numeroAluno;
            numeroMaisBaixo = numeroAluno;
        }
        else{
            if(altura > maiorAltura){
                maiorAltura = altura;
                numeroMaisAlto = numeroAluno;
            }
            if(altura < menorAltura){
                menorAltura = altura;
                numeroMaisBaixo = numeroAluno;
            }
        }
    }

    cout<<"Aluno mais alto: "<<numeroMaisAlto<<endl;
    cout<<"Altura do mais alto: "<<maiorAltura<<endl;

    cout<<"Aluno mais baixo: "<<numeroMaisBaixo<<endl;
    cout<<"Altura mais baixo: "<<menorAltura<<endl;

    return 0;
}
