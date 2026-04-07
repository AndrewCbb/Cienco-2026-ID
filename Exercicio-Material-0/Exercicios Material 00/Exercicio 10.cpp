#include <iostream>

using namespace std;

int main()
{
    int idade, opiniao;
    int total = 0;
    int otimo = 0, bom = 0, regular = 0, ruim = 0;
    int somaidade = 0;
    float media,percOtimo,percBom,percRegular,percRuim;

    do{
        cout<<"Digite a idade: "<<endl;
        cin>> idade;

        if(idade >=0){
            cout<<"Digite a opiniao"<<endl<<
            "1 - Otimo"<<endl<<
            "2 - Bom"<<endl<<
            "3 - Regular"<<endl<<
            "4- Ruim"<<endl;
            cin>>opiniao;

            somaidade += idade;
            total++;

            if(opiniao == 1){
                otimo++;
            }
            else if(opiniao == 2){
                bom++;
            }
            else if(opiniao == 3){
                regular++;
            }
            else if(opiniao == 4){
                ruim++;
            }
            else{
                cout<<"Opcao INVALIDA!!!"<<endl;
            }
        }
    } while (idade >=0);

    if(total > 0){
        media = somaidade / (float) total;

        percOtimo = (otimo *100.0) / total;
        percBom = (bom * 100.0) / total;
        percRegular = (regular * 100.0) / total;
        percRuim = (ruim * 100.0) / total;

        cout<<"Quantidade de pessoas: "<<total<<endl;
        cout<<"Media de idade: "<<media<<endl;

        cout<<"Percutuais: "<<endl;
        cout<<"Otimo: "<<percOtimo<<"%"<<endl;
        cout<<"Bom: "<<percBom<<"%"<<endl;
        cout<<"Regular: "<<percRegular<<"%"<<endl;
        cout<<"Ruim: "<<percRuim<<"%"<<endl;
    }
    else{
        cout<<"Nenhuma dado foi encontrado!!!"<<endl;
    }


}
