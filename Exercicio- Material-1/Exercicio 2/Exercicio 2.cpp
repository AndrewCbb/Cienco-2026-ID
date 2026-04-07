#include <iostream>

using namespace std;

int main(){

     cout<<" Exercicio 2 "<<endl;


    float notas[20], soma = 0, media;
    int acima = 0;

    for(int i = 0; i < 20; i++){
        cout<<"Digite a nota do aluno: "<<i+1<<": ";
        cin>>notas[i];
        soma += notas[i];
    }

    media = soma / 20;

    for(int i =0; i < 20; i++){
        if(notas[i] > media){
            acima++;
        }
    }
    cout<<"Media da turma: "<<media<< endl;
    cout<<"Alunos acima da media: "<<acima<<endl;

    return 0;
 }
