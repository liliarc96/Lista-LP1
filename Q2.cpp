#include <iostream>
using namespace std;

int main(){
    float largura, comprimento, area;

    cout<< "Digite a largura do lote em metros: " << endl;
    cin>> largura;
    cout<< "Digite a comprimento do lote em metros: " << endl;
    cin>> comprimento;

    area = largura * comprimento;

    cout<< "A area do lote eh de " << area << " metros quadrados." << endl;
}
