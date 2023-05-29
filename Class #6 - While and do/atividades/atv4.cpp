/*Desenvolver a lógica para um programa que escreva na tela os números de 10 até 1.*/
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int i = 10;

    while(i >= 1) {
        cout << "\n"<<i ;
        i--;      
    }
     return 0;
}