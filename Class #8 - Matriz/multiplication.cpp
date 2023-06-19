#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matriz[4][2], matrix2[4][2], i, j;
    int posI, posJ, result, max=0;

    for ( i = 0; i < 4; i++){
        for (j = 0; j < 2; j++){
            matriz[i][j] = rand() %13;
            if (matriz [i][j] > max) {
              max = matriz[i][j];
            }
        }   
    }
    for (i = 0; i < 4; i++) {
        cout <<"\n"; 
        for (j = 0; j < 2; j++) {
          cout << matriz[i][j] << "\t" ;
        }
    }
    cout << "\nThe biggest number is " << max;

    for (i = 0; i < 4; i++) {
      cout <<"\n"; 
      for (j = 0; j < 2; j++) {
        matrix2[i][j] = matriz[i][j] * max;
        cout << matrix2[i][j] << "\t" ;
      }
    }
}
