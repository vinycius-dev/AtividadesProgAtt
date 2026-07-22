#include <iostream>
using namespace std;

// Funcao que recebe dois numeros inteiros e retorna a soma.
int soma(int valor1, int valor2) {
    return valor1 + valor2;
}

int main() {
    int numero1, numero2;

    cout << "Digite o primeiro valor inteiro: ";
    cin >> numero1;

    cout << "Digite o segundo valor inteiro: ";
    cin >> numero2;

    int resultado = soma(numero1, numero2);

    cout << "\nResultado da soma: " << resultado << endl;

    return 0;
}
