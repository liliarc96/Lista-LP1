#include <iostream>
#define ANO_ATUAL 2015
using namespace std;

int main(){
    int anodnasc, idade;

    cout<< "Digite seu o ano de nascimento." << endl;
    cin>> anodnasc;

    idade = ANO_ATUAL - anodnasc;

    if((idade >= 5) && (idade <= 10)){
        cout<< "Nadador de idade " << idade << " eh da categoria Infantil ";
        if(idade <= 7){
            cout<< "A." << endl;
        }else{
            cout<< "B." << endl;
        }
    }
    if((idade >= 11) && (idade <= 17)){
        cout<< "Nadador de idade " << idade << " eh da categoria Juvenil ";
        if(idade <= 13){
            cout<< "A." << endl;
        }else{
            cout<< "B." << endl;
        }
    }
    if(idade > 17){
        cout<< "Nadador de idade " << idade << " eh da categoria Senior" << endl;
    }
}
