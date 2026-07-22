#include <iostream>
#include <iomanip>
using namespace std;

// Funcao inline que converte dolares para reais.
inline double converterParaReais(double dolares, double cotacao) {
    return dolares * cotacao;
}

int main() {
    double dolares, cotacao;

    cout << "Digite a quantia em dolares: US$ ";
    cin >> dolares;

    cout << "Digite a cotacao atual do dolar: R$ ";
    cin >> cotacao;

    double reais = converterParaReais(dolares, cotacao);

    cout << fixed << setprecision(2);
    cout << "\nUS$ " << dolares
         << " equivalem a R$ " << reais << endl;

    return 0;
}
