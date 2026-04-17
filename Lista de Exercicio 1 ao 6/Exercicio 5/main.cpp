#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "N:"<<endl;
    cin >> n;

    int v[50];

    for (int i=0;i<n;i++) cin >> v[i];

    int pares=0, impares=0;

    for (int i=0;i<n;i++) {
        if (v[i]%2==0) pares++;
        else impares++;
    }

    cout << "Pares: " << pares <<endl;
    cout << "Impares: " << impares <<endl;

    return 0;
}
}
}
