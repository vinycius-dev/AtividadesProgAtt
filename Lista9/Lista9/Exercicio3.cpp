#include <iostream>
using namespace std;

class Veiculo{
public:
    virtual void emitirSom(){
        cout<<"Ruido generico do motor..."<<endl;
    }
};

class Carro : public Veiculo{
public:
    void emitirSom() override{
        cout<<"Bii Bii! (Buzina do carro)"<<endl;
    }
};

int main(){
    Veiculo *v=new Carro();
    v->emitirSom();
    delete v;
    return 0;
}
