#include <iostream>
#define ANO_ATUAL 2015
using namespace std;

int main(){
    int anodnasc, anodingresso, idade, tdtrabalho;

    cout<< "Insira seu ano de nascimento:"<< endl;
    cin>> anodnasc;
    cout<< "Insira o ano de ingresso na companhia:"<< endl;
    cin>> anodingresso;

    idade = ANO_ATUAL - anodnasc;
    tdtrabalho = ANO_ATUAL - anodingresso;

    cout<< "O empregado tem " << idade << " anos de idade e " << tdtrabalho << " anos de trabalho." << endl;
    if ((idade >= 65) || (tdtrabalho >= 30)){
        cout<< "Requerer aposentadoria." << endl;
    }else{
        cout<< "Nao requerer." << endl;
    }
}
