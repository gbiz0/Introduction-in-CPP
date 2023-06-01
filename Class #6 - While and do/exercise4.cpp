//Make a program to do factorial calculations from 1 to 10 

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int contador = 1, x, calculo  = 1;

    cout << "Write a number: ";
    cin >> x;

    while(contador <= x) {
      calculo *= contador;
      contador++;
   }
    cout << "The result is: "<< calculo;

    return 0;
}