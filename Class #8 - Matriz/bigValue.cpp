#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matriz[2][3], i, j;
    int posI, posJ, max;

    for ( i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            matriz[i][j] = rand() %201;
            if (matriz [i][j] > max) {
              max = matriz[i][j];
              posI = i;
              posJ = j;
            }
        }   
    }
    for (i = 0; i < 2; i++) {
      cout <<"\n"; 
      for (j = 0; j < 3; j++) {
        cout << matriz[i][j] << "\t" ;
      }
    }
    cout << "\nThe biggest number is " << max;
    cout << "\nLocated on matriz in row " << posI << " and column " << posJ;
}
