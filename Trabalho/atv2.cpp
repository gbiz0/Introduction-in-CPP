/*Faça um programa que crie um vetor de 30 posições, atribuindo valores aleatoriamente, com a
função rand(). Os valores aleatórios devem estar entre 0 e 200. Mostre o vetor. Em seguida atribua
valor 0 para todos os elementos que possuírem valores ímpares. Mostre o vetor após a alteração.*/
#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int vector[30], i;
    int impar;

     for ( i = 0; i < 30; i++){
            vector[i] = rand() %201;
            if (vector [i] % 2 != 0) {
              impar = vector[i];
              i = impar;
            }  
    }
    for (i = 0; i < 30; i++) {
        cout << vector[i] << "\t" ;
      }
}