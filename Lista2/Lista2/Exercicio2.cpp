#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    float altura;

    cout << "Nome completo: ";
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;
    cout << "Altura (m): ";
    cin >> altura;

    cout << "\n=== DADOS ===\n";
    cout << "Nome   : " << nome << endl;
    cout << "Idade  : " << idade << " anos" << endl;
    cout << "Altura : " << altura << " m" << endl;
    return 0;
}