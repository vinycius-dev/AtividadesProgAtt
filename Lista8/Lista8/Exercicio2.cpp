#include <iostream>
#include <stdexcept>
using namespace std;

class Contador {
private:
    int valor;

public:
    explicit Contador(int valorInicial = 0) {
        if (valorInicial < 0) {
            throw invalid_argument("O valor deve ser positivo ou zero.");
        }

        valor = valorInicial;
    }

    int getValor() const {
        return valor;
    }

    // Incremento pre-fixado.
    // Assinatura: Contador& operator++()
    // Incrementa primeiro e retorna o proprio objeto por referencia.
    Contador& operator++() {
        ++valor;
        return *this;
    }

    // Incremento pos-fixado.
    // Assinatura: Contador operator++(int)
    // O parametro int serve apenas para diferenciar a assinatura.
    // Retorna uma copia do valor antigo e depois incrementa o objeto atual.
    Contador operator++(int) {
        Contador copiaAnterior(*this);
        ++valor;
        return copiaAnterior;
    }
};

int main() {
    Contador contador(5);

    cout << "Valor inicial: " << contador.getValor() << endl;

    Contador resultadoPrefixado = ++contador;

    cout << "\nDepois de ++contador:\n";
    cout << "Contador: " << contador.getValor() << endl;
    cout << "Retorno prefixado: "
         << resultadoPrefixado.getValor() << endl;

    Contador resultadoPosfixado = contador++;

    cout << "\nDepois de contador++:\n";
    cout << "Contador: " << contador.getValor() << endl;
    cout << "Retorno pos-fixado: "
         << resultadoPosfixado.getValor() << endl;

    return 0;
}
