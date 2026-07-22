#include <iostream>
using namespace std;

class Termometro{
private:
    double temperaturaCelsius;

public:
    Termometro(){
        temperaturaCelsius=25.0;
    }

    void setTemperaturaCelsius(double t){
        if(t>=-273.15)
            temperaturaCelsius=t;
        else
            cout<<"Temperatura invalida!\n";
    }

    double getTemperaturaCelsius(){
        return temperaturaCelsius;
    }

    double getTemperaturaFahrenheit(){
        return (temperaturaCelsius*9.0/5.0)+32.0;
    }
};

int main(){
    Termometro t;
    t.setTemperaturaCelsius(30);

    cout<<"Celsius: "<<t.getTemperaturaCelsius()<<endl;
    cout<<"Fahrenheit: "<<t.getTemperaturaFahrenheit()<<endl;

    return 0;
}
