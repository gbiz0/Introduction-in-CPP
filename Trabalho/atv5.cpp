/*Faça um programa que crie uma matriz 5 x 2, onde cada coluna corresponde a um lado de um
triangulo retângulo. Crie um vetor de 5 posições que contenha a área dos respectivos triângulos e os
mostrem.*/
#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matriz[5][2], i, j;
    int posI, posJ, max;

    for ( i = 0; i < 2; i++){
        for (j = 0; j < 5; j++){
            matriz[i][j] = rand() %201;

    }
    for (i = 0; i < 2; i++) {
      cout <<"\n"; 
      for (j = 0; j < 5; j++) {
        cout << matriz[i][j] << "\t" ;
      }
    }
    cout << "\nThe biggest number is " << max;
    cout << "\nLocated on matriz in row " << posI << " and column " << posJ;
}
