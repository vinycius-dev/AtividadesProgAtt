#include <iostream>
using namespace std;

class ContaBancaria{
private:
    int numeroConta;
    double saldo;

public:
    ContaBancaria(int numero){
        numeroConta=numero;
        saldo=0;
    }

    double getSaldo(){
        return saldo;
    }

    void depositar(double valor){
        if(valor>0) saldo+=valor;
    }

    void sacar(double valor){
        if(valor>0 && valor<=saldo)
            saldo-=valor;
        else
            cout<<"Saldo insuficiente ou valor invalido.\n";
    }
};

int main(){
    ContaBancaria conta(1234);
    conta.depositar(500);
    conta.sacar(150);
    cout<<"Saldo: R$ "<<conta.getSaldo()<<endl;
    return 0;
}
