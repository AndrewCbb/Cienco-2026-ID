#include <iostream>
using namespace std;

int main() {

    int n, x;
    int par=0, impar=0, pos=0, neg=0, zero=0;
    int m3=0, m5=0, ambos=0;
    int maior, menor;
    float somaPar=0, somaImpar=0;

    cout << "Quantidade:"<<endl;
    cin >> n;

    for (int i=0; i<n; i++) {

        cin >> x;

        if (i==0) { maior = menor = x; }

        if (x % 2 == 0) { par++; somaPar += x; }
        else { impar++; somaImpar += x; }

        if (x > 0) pos++;
        else if (x < 0) neg++;
        else zero++;

        if (x % 3 == 0) m3++;
        if (x % 5 == 0) m5++;
        if (x % 3 == 0 && x % 5 == 0) ambos++;

        if (x > maior) maior = x;
        if (x < menor) menor = x;
    }

    cout << "Pares: " << par <<endl;
    cout << "Impares: " << impar <<endl;
    cout << "Positivos: " << pos <<endl;
    cout << "Negativos: " << neg <<endl;
    cout << "Zeros: " << zero <<endl;
    cout << "Multiplos de 3: " << m3 <<endl;
    cout << "Multiplos de 5: " << m5 <<endl;
    cout << "Ambos: " << ambos <<endl;
    cout << "Maior: " << maior <<endl;
    cout << "Menor: " << menor <<endl;

    if (par > 0) cout << "Media pares: " << somaPar/par <<endl;
    if (impar > 0) cout << "Media impares: " << somaImpar/impar <<endl;

    return 0;
}
