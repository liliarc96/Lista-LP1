#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n1, n2, n3, menor;

    cout<< "Digite tres numeros:" << endl;
    cin>> n1 >> n2 >> n3;

    menor = (n1+n2 - abs(n1-n2)) /2;

    if (menor < n3){
        cout<< "O menor numero eh "<< menor << endl;
    }else{
        cout<< "O menor numero eh "<< n3 << endl;
    }
}
