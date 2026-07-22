#include <iostream>
using namespace std;

class Veiculo{
public:
    virtual void emitirSom(){
        cout<<"Ruido generico do motor..."<<endl;
    }
};

int main(){
    Veiculo v;
    v.emitirSom();
    return 0;
}
