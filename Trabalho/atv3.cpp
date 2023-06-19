/*Faça um programa para criar uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 (zero)
os demais elementos. Mostre ao final a matriz obtida.
*/
#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matriz[5][5], i, j;
    int posI, posJ, num;

    for ( i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            matriz[i][j] = rand() %1;
            if(i == j){
              matriz[i][j] = 1; 
            } else {
                matriz[i][j] = 0;
              }
        }   
    }

    for (i = 0; i < 5; i++) {
      cout <<"\n"; 
      for (j = 0; j < 5; j++) {
        cout << matriz[i][j] << "\t" ;
      }
    }
  }