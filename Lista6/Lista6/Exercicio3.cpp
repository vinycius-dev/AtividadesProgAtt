#include <iostream>
#include <queue>
#include <string>
#include <limits>
using namespace std;

int main() {
    queue<string> documentos;
    int opcao;
    string documento;

    do {
        cout << "\n1 - Adicionar documento\n";
        cout << "2 - Processar documento\n";
        cout << "3 - Ver primeiro documento\n";
        cout << "4 - Ver quantidade\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcao) {
            case 1:
                cout << "Nome do documento: ";
                getline(cin, documento);
                documentos.push(documento);
                break;
            case 2:
                if (!documentos.empty()) {
                    cout << "Processado: " << documentos.front() << endl;
                    documentos.pop();
                } else {
                    cout << "Fila vazia.\n";
                }
                break;
            case 3:
                if (!documentos.empty())
                    cout << "Primeiro: " << documentos.front() << endl;
                else
                    cout << "Fila vazia.\n";
                break;
            case 4:
                cout << "Quantidade: " << documentos.size() << endl;
                break;
            case 0:
                cout << "Encerrando...\n";
                break;
            default:
                cout << "Opcao invalida.\n";
        }
    } while (opcao != 0);

    return 0;
}
