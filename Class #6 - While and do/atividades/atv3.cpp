/*Faça um Programa que leia 10 valores inteiros e escreva no final a média dos valores lidos.*/
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
int x = 1, calc  = 1, num, mean;
    while (x <= 10) { 
        cout << "Write a number: ";
        cin >> num;

        calc = calc + num;
        x ++; 
    }
    mean = calc / 10;
    cout << "\n The result is: "<< mean;
     return 0;
}