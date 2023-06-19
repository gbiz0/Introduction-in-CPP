/*Faça um programa que crie, aleatoriamente uma matriz 6 x 6. Os valores aleatórios devem estar
entre 0 e 1000. Conte e mostre quantos valores maiores que 25 ela possui. Mostre apenas a
quantidade total, sem precisar cada um dos números maiores que 25.*/
#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matriz[6][6], i, j;
    int quant;

    for ( i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            matriz[i][j] = rand() %1001;
            if (matriz [i][j] > 25) {
            quant ++;
        }
        }   
    } 
    for (i = 0; i < 6; i++) {
      cout <<"\n"; 
      for (j = 0; j < 6; j++) {
        cout << matriz[i][j] << "\t" ;
      }
    }
    cout << "\nTem " << quant <<" números maiores que 25";
}
