#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int contador = 0, x, number, calculo;

    cout << "Write a number: ";
    cin >> x;

    while (contador < x) { 
        cout << "Again: ";
        cin >> number;

        calculo = calculo + number;
        contador ++; 
    }
    cout << "\n The result is: "<< calculo;

    return 0;    
}