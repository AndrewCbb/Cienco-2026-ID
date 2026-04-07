#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,  "Portuguese");

    float precoEtiqueta, precoFinal;
    int codigo;

    cout<<"Digite o preco do produto: "<<endl;
    cin>>precoEtiqueta;

    cout<<"Digite o codigo do produto: "<<endl;
    cin>>codigo;

    if(codigo == 1){
        precoFinal = precoEtiqueta * 0,90;
        cout<<"Pagamento a visa ( 10% de desconto )"<<endl;
    }
    else if( codigo == 2){
        precoFinal = precoEtiqueta * 0,95;
        cout<<"Pagamento a vista no cartão ( 5% de desconto ) "<<endl;
    }
    else if(codigo == 3){
        precoFinal = precoEtiqueta;
        cout<<"Pagamento em 2x sem juros"<<endl;
    }
    else if(codigo == 4){
        precoFinal = precoEtiqueta * 1.10;
        cout<<"Pagamento em 3x com 10% de acrescimo"<<endl;
    }
    else{
        cout<<"Codigo INVALIDO!!!"<<endl;
        return 0;
    }

    cout<<"Preco final: "<<precoFinal<<endl;

    return 0;
}
