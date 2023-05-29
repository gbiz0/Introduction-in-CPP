/*Faça um programa que apresente os números divisíveis por 3 e que estejam entre 4 e 12. */

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int i;

    while(i >= 4 && i <= 12) {
     if (i % 3 == 0) {
     cout << "\n" << i; 
     } i++;      
    }
     return 0;
}