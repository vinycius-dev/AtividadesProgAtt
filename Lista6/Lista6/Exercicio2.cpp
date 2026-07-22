#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numeros;
    int opcao, valor;

    do {
        cout << "\n1 - Inserir no inicio\n";
        cout << "2 - Inserir no final\n";
        cout << "3 - Remover por valor\n";
        cout << "4 - Exibir lista\n";
        cout << "5 - Exibir tamanho\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                numeros.push_front(valor);
                break;
            case 2:
                cout << "Valor: ";
                cin >> valor;
                numeros.push_back(valor);
                break;
            case 3:
                cout << "Valor a remover: ";
                cin >> valor;
                numeros.remove(valor);
                break;
            case 4:
                cout << "Lista: ";
                for (int n : numeros) cout << n << " ";
                cout << endl;
                break;
            case 5:
                cout << "Tamanho: " << numeros.size() << endl;
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
