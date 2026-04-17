#include <iostream>
using namespace std;

int main() {

    float a, b, c;

    cout << "Digite os lados:"<<endl;
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) {

        if (a == b && b == c) cout << "Equilatero"<<endl;
        else if (a == b || a == c || b == c) cout << "Isosceles"<<endl;
        else cout << "Escaleno"<<endl;

        float L = a;
        if (b > L) L = b;
        if (c > L) L = c;

        float soma = a*a + b*b + c*c - L*L;

        if (L*L == soma) cout << "Retangulo"<<endl;
        else if (L*L > soma) cout << "Obtusangulo"<<endl;
        else cout << "Acutangulo"<<endl;

    } else {
        cout << "Nao forma triangulo"<<endl;
    }

    return 0;
}
