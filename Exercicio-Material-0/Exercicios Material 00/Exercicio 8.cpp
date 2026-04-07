#include <iostream>

using namespace std;

int main()
{
    int voto;
    int cand1 = 0, cand2 = 0, nulo = 0, branco = 0, total = 0;
    float perc1, perc2, percNulo, percBranco;

    do{
       cout<<"Digite seu voto 1, 2, 3 ou 4 para cancelar"<<endl;
       cin>>voto;

       if(voto == 1){
        cand1++;
        total++;
        }
        else if(voto == 2){
            cand2++;
            total++;
        }
        else if(voto == 3){
            nulo++;
            total++;
        }
        else if(voto == 4){
            branco++;
            total;
        }
        else if(voto != 0){
            cout<<"Codigo INVALIDO!!!"<<endl;
        }
}
    while ( voto !=0);

    if(total> 0){
        perc1 = (cand1 * 100.0) / total;
        perc2 = (cand2 * 100.00) /total;
        percNulo  = (nulo * 100.0)/ total;
        percBranco = (branco * 100.0) / total;

        cout<<"Resultado da votacao: "<<endl;
        cout<<"Percentual candidato 1: "<<perc1 <<"%"<<endl;
        cout<<"Percentual candidato 2: "<<perc2 <<"%"<<endl;
        cout<<"Percentual de votos nulos: "<<percNulo <<"%"<<endl;
        cout<<"Percentual de votos em branco: "<<percBranco <<"%"<<endl;
    }
    else{
        cout<<"Nenhuma voto foi registrado."<<endl;
    }
    return 0;
}
