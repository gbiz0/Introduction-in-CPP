/*Faça um programa que crie um vetor de 40 posições, atribuindo valores aleatoriamente, com a
função rand(). Os valores aleatórios devem estar em 0 e 50. Contar e mostrar quantos valores pares
ele possui.*/
#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int vector[40], i;
    int par=0;

    for ( i = 0; i < 40; i++){
            vector[i] = rand() %51;
    } 
    for (i = 0; i < 40; i++) {
        cout << vector[i] << "\t" ;
        if (vector [i]% 2 == 0) {
            par++;
        }
      }
  
    cout << "\nTem " << par <<" números pares";
}
