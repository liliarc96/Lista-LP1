#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<< "Digite um numero inteiro: " << endl;
    cin>> numero;

    if (numero % 2 == 0){
        cout<< "O numero " << numero << " eh par" << endl;
    }else{
        cout<< "O numero " << numero << " eh impar" << endl;
    }
}
