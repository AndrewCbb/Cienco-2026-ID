#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout<<"Digite sua idade"<<endl;
    cin>>idade;

    if(idade >= 5 && idade <=7){
        cout<<"Sua categoria é Infantil A"<<endl;
    }
    else if (idade >= 8 && idade <= 10){
        cout<<"Sua categoria é Infatil B"<<endl;
    }
    else if (idade >=11 && idade <=13){
        cout<<"Sua categoria é Juvenil A"<<endl;
    }
    else if ( idade >= 14 && idade <17) {
        cout<<"Sua categoria é Juvenil B"<<endl;
    }
    else if(idade > 17){
        cout<<"Sua categoria é Senior"<<endl;
    }
       else
       {
           cout<<"Idade invalidade, tente novamente!"<<endl;
       }
       return 0;
    }

