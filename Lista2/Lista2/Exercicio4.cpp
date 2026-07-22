#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    double salario;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Salario: ";
    cin >> salario;

    cout << "\n=== FUNCIONARIO ===\n";
    cout << left << setw(10) << "Nome:" << nome << endl;
    cout << left << setw(10) << "Salario:"
         << fixed << setprecision(2) << salario << endl;
    return 0;
}