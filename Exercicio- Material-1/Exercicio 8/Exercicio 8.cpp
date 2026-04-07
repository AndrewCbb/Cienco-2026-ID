#include <iostream>

using namespace std;

int main()
{
    int vetor[5];
    int *p;
    float soma = 0, media;

    for(int i =0; i< 5; i++){
        cout<<"Digite o valor: "<<i+1<<": ";
        cin>>vetor[i];
    }

    p= vetor;

    for(int i = 0; i< 5; i++){
        soma+= *(p+i);
    }

    media = soma/5;

    cout<<"\n Media: "<< media<<endl;

    return 0;
}
