#include <iostream>
#include <stdexcept>
using namespace std;

class MatrizDinamica {
private:
    int linhas;
    int colunas;
    int** dados;

    void alocar() {
        dados = new int*[linhas];

        for (int i = 0; i < linhas; i++) {
            dados[i] = new int[colunas]{};
        }
    }

    void liberar() {
        if (dados != nullptr) {
            for (int i = 0; i < linhas; i++) {
                delete[] dados[i];
            }

            delete[] dados;
            dados = nullptr;
        }
    }

public:
    // Construtor parametrizado.
    MatrizDinamica(int quantidadeLinhas, int quantidadeColunas)
        : linhas(quantidadeLinhas),
          colunas(quantidadeColunas),
          dados(nullptr) {

        if (linhas <= 0 || colunas <= 0) {
            throw invalid_argument("As dimensoes devem ser positivas.");
        }

        alocar();
    }

    // Construtor de copia com copia profunda.
    MatrizDinamica(const MatrizDinamica& outra)
        : linhas(outra.linhas),
          colunas(outra.colunas),
          dados(nullptr) {

        alocar();

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                dados[i][j] = outra.dados[i][j];
            }
        }
    }

    // Destrutor que libera toda a memoria alocada no heap.
    ~MatrizDinamica() {
        liberar();
    }

    void definirValor(int linha, int coluna, int valor) {
        if (linha < 0 || linha >= linhas ||
            coluna < 0 || coluna >= colunas) {
            throw out_of_range("Posicao invalida.");
        }

        dados[linha][coluna] = valor;
    }

    int obterValor(int linha, int coluna) const {
        if (linha < 0 || linha >= linhas ||
            coluna < 0 || coluna >= colunas) {
            throw out_of_range("Posicao invalida.");
        }

        return dados[linha][coluna];
    }

    void exibir() const {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                cout << dados[i][j] << "\t";
            }

            cout << endl;
        }
    }
};

int main() {
    MatrizDinamica matrizOriginal(2, 3);

    matrizOriginal.definirValor(0, 0, 10);
    matrizOriginal.definirValor(0, 1, 20);
    matrizOriginal.definirValor(0, 2, 30);
    matrizOriginal.definirValor(1, 0, 40);
    matrizOriginal.definirValor(1, 1, 50);
    matrizOriginal.definirValor(1, 2, 60);

    MatrizDinamica matrizCopia = matrizOriginal;

    // Altera somente a matriz original para demonstrar a copia profunda.
    matrizOriginal.definirValor(0, 0, 999);

    cout << "Matriz original:\n";
    matrizOriginal.exibir();

    cout << "\nMatriz copiada:\n";
    matrizCopia.exibir();

    return 0;
}
