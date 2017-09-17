#include <iostream>
using namespace std;

int main(){
    float largura, comprimento;
    float area;

    cout<< "Digite a largura do lote em metros: \n";
    cin>> largura;
    cout<< "Digite a comprimento do lote em metros: \n";
    cin>> comprimento;

    area = largura * comprimento;

    cout<< "A area do lote eh de " << area << " metros quadrados." << endl;
}
