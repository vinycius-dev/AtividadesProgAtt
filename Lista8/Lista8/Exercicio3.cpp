#include <iostream>
#include <string>
#include <utility>
using namespace std;

class StringSegura {
private:
    string texto;

public:
    StringSegura() = default;

    explicit StringSegura(string valor)
        : texto(move(valor)) {
    }

    // Impede a copia por construcao.
    StringSegura(const StringSegura&) = delete;

    // Impede a copia por atribuicao tradicional.
    StringSegura& operator=(const StringSegura&) = delete;

    // Permite a construcao por movimento.
    StringSegura(StringSegura&&) noexcept = default;

    // Permite a atribuicao por movimento.
    StringSegura& operator=(StringSegura&&) noexcept = default;

    ~StringSegura() = default;

    const string& getTexto() const {
        return texto;
    }
};

int main() {
    StringSegura primeira("Objeto original");

    // Movimento permitido.
    StringSegura segunda = move(primeira);

    cout << "Texto movido: " << segunda.getTexto() << endl;

    StringSegura terceira;
    terceira = move(segunda);

    cout << "Texto apos atribuicao por movimento: "
         << terceira.getTexto() << endl;

    // As linhas abaixo nao compilariam, pois a copia foi deletada:
    // StringSegura copia = terceira;
    // StringSegura outra;
    // outra = terceira;

    return 0;
}
