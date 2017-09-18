#include <iostream>
using namespace std;

int main(){
    float n1, n2, resultado;
    char operacao;

    cout<< "Operacoes:\n\n Soma = + \n Subtracao = - \n Multiplicacao = * \n Divisao = /";
    cout<< "\n\nQual a operacao que deve ser realizada?\n";
    cin>> operacao;
    cout<< "Digite o primeiro e o segundo numero:" << endl;
    cin>> n1 >> n2;

    switch (operacao){
        case '+':
            resultado = n1 + n2;
            cout<< "O resultado da soma eh: " << resultado << endl;
            break;
        case '-':
            resultado = n1 - n2;
            cout<< "O resultado da subtracao eh: " << resultado << endl;
            break;
        case '*':
            resultado = n1 * n2;
            cout<< "O resultado da multiplicacao eh: " << resultado << endl;
            break;
        case '/':
            resultado = n1 / n2;
            cout<< "O resultado da divisao eh: " << resultado << endl;
            break;
    }
}
