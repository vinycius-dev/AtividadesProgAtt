#include <iostream>
using namespace std;

int main() {
    double a[100];
    double *aPtr = a;
    double soma = 0;
    int n;

    cout << "Quantidade de valores (max 100): ";
    cin >> n;

    if(n < 1 || n > 100){
        cout << "Quantidade invalida!";
        return 0;
    }

    for(int j=0;j<n;j++){
        cout << "Valor " << j+1 << ": ";
        cin >> *(a + j);   // armazenando usando ponteiro
    }

    for(int j=0;j<n;j++){
        soma += *(aPtr + j); // acessando usando ponteiro
    }

    cout << "\nSoma = " << soma << endl;
    cout << "Media = " << soma/n << endl;

    return 0;
}
