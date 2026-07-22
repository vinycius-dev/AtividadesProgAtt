#include <iostream>
#include <stack>
#include <string>
#include <limits>
using namespace std;

int main() {
    stack<string> palavras;
    int opcao;
    string palavra;

    do {
        cout << "\n1 - Digitar palavra\n";
        cout << "2 - Desfazer ultima palavra\n";
        cout << "3 - Ver ultima palavra\n";
        cout << "4 - Ver quantidade\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcao) {
            case 1:
                cout << "Palavra: ";
                getline(cin, palavra);
                palavras.push(palavra);
                break;
            case 2:
                if (!palavras.empty()) {
                    cout << "Removida: " << palavras.top() << endl;
                    palavras.pop();
                } else {
                    cout << "Pilha vazia.\n";
                }
                break;
            case 3:
                if (!palavras.empty())
                    cout << "Ultima: " << palavras.top() << endl;
                else
                    cout << "Pilha vazia.\n";
                break;
            case 4:
                cout << "Quantidade: " << palavras.size() << endl;
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
