/*Faça um Programa que escreva na tela os números ímpares de 0 até 80, e a média dos números pares.*/
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int i, par, impar, media;

    while(i <= 80) {
        if (i % 2 == 0) {
            par = par + i;
        } else if (i % 2 == 1) {
            cout << "\n"<<i ;
        }
        i++;      
    }
        media = par / i;
        cout << "\n The mean is: " << media;
     return 0;
}