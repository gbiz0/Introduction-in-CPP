/*Faça um programa que apresente os números divisíveis por 3 e que estejam entre 4 e 12. */

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int i = 4;
    while (i <= 12){
        if (i % 3 == 0){
            cout << i << endl;
        }
        i++; 
    }
     return 0;
}