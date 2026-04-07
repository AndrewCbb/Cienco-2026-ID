#include <iostream>

using namespace std;

int main()
{
   int vetor[10];
   int *p;

   for(int i = 0; i < 10;i++){
    cout<<"Digite o valor: "<< i+1<<"; "<<endl;
    cin>>vetor[i];
   }

   p = vetor;

   cout<<"Ordem normal do vetor: "<<endl;
   for(int i = 0; i < 10;i ++){
    cout<<*(p+i)<<" ";
   }
   cout<<"\nOrdem inversa do vetor: "<<endl;
   for(int i = 9; i >= 0 ;i--){
    cout<<*(p+i)<<" ";
   }

   return 0;
}
