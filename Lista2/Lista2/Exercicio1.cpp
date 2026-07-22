#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Nome completo: ";
    getline(cin, nome);

    cout << "Idade: ";
    cin >> idade;

    cout << "\n=== DADOS DO USUARIO ===\n";
    cout << "Nome : " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    return 0;
}