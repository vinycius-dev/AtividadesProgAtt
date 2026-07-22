#include <iostream>
#include <iomanip>
using namespace std;

const int ANO = 2;
const int TRIMESTRE = 4;

int main() {
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0.0;

    // Leitura das despesas.
    for (int ano = 0; ano < ANO; ano++) {
        cout << "\n--- Despesas do ano " << ano + 1 << " ---\n";

        for (int trimestre = 0; trimestre < TRIMESTRE; trimestre++) {
            cout << "Digite a despesa do "
                 << trimestre + 1 << "o trimestre: R$ ";

            cin >> despesas[ano][trimestre];
        }
    }

    cout << fixed << setprecision(2);
    cout << "\n=============== TABELA DE DESPESAS ===============\n";
    cout << left << setw(10) << "Ano";

    for (int trimestre = 0; trimestre < TRIMESTRE; trimestre++) {
        cout << right << setw(15)
             << ("Trimestre " + to_string(trimestre + 1));
    }

    cout << right << setw(15) << "Total do ano" << endl;

    for (int ano = 0; ano < ANO; ano++) {
        double totalAno = 0.0;

        cout << left << setw(10) << ("Ano " + to_string(ano + 1));

        for (int trimestre = 0; trimestre < TRIMESTRE; trimestre++) {
            cout << right << setw(15) << despesas[ano][trimestre];
            totalAno += despesas[ano][trimestre];
        }

        cout << right << setw(15) << totalAno << endl;
        totalGeral += totalAno;
    }

    cout << "\nTotal de despesas nos dois anos: R$ "
         << totalGeral << endl;

    return 0;
}
