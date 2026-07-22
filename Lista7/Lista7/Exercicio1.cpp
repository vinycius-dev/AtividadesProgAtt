#include <iostream>
#include <string>
using namespace std;

class Gato {
private:
    string nome;
    int idade;
    double peso;

public:
    Gato(string n,int i,double p){
        nome=n;
        idade=i;
        setPeso(p);
    }

    void setPeso(double p){
        if(p>0)
            peso=p;
        else{
            cout<<"Peso invalido! Definido como 1 kg.\n";
            peso=1;
        }
    }

    void mostrar(){
        cout<<"Nome: "<<nome<<"\nIdade: "<<idade<<" anos\nPeso: "<<peso<<" kg\n";
    }
};

int main(){
    Gato gato("Mingau",3,4.5);
    gato.mostrar();
    return 0;
}
