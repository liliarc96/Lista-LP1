#include <iostream>
using namespace std;

int main(){
    float tempC, tempF;

    cout<< "Digite a temperatura em Fahrenheit: " << endl;
    cin>> tempF;

    tempC = (tempF - 32)/1.8;

    cout.precision(2);
    cout<< "A temperatura convertida eh de " << tempC << " graus Celcius." << endl;
}
