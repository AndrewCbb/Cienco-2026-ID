#include <iostream>

using namespace std;

int main()
{
    int N;

    cout<<"Digite o tamanho dos vetores: ";
    cin>> N;

    int A[N], B[N], Soma[N];

    cout<<"Digite os valores do vetor A: "<<endl;
    for(int i = 0; i< N; i++){
        cout<<"A["<<i<<"] = ";
        cin>>A[i];
    }

    cout<<"Digite os valores do vetor B: "<<endl;
    for(int i = 0;i < N; i++){
        cout<<"B["<<i<<"] = ";
        cin>>B[i];
    }

    for(int i = 0; i < N; i++){
        Soma[i] = A[i]+B[i];
    }

    cout<<"Vetor Soma: "<<endl;
    for(int i = 0; i < N; i++){
        cout<<"Soma["<<i<<"] = "<<Soma[i]<<endl;
    }

    return 0;
}
