#include <iostream>

using namespace std;

int main()
{
    int vetor[20];

    for( int i = 0;i < 20;i++){
        cout<<"Digite os numeros: "<<i+1<<": ";
        cin>>vetor[i];
    }
    cout<<"Ordem inversa dos numeros: ";
    for(int i = 19;i >=0;i--){
        cout<<vetor[i]<<" ";
    }
    return 0;
}
