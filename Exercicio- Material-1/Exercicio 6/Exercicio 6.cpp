#include <iostream>

using namespace std;

int main()
{
    float temp[365];
    float menor,maior,soma = 0,mediaAnual;
    int Dias = 0;

    for(int i = 0; i< 365; i++){
        cout<<"Digite a temperatura do dia: "<<i+1<<": ";
        cin>>temp[i];
        soma+=temp[i];

        if(i == 0){
            menor = temp[i];
            maior = temp[i];
        }else{
            if(temp[i] < menor){
                menor = temp[i];
            }
            if(temp[i] > maior){
                maior = temp[i];
            }
        }
    }

    mediaAnual = soma / 365;

    for(int i = 0; i < 365; i++){
        if(temp[i] < mediaAnual){
            Dias++;
        }
    }

    cout<<"Menor Temperatura do ano: " <<menor<<endl;
    cout<<"Maior Temperatura do ano: " <<maior<<endl;
    cout<<"Temperatura Media Anual: " <<mediaAnual<<endl;
    cout<<"Numero de Dias abaixa da media anual: " <<Dias<<endl;

    return 0;
}
