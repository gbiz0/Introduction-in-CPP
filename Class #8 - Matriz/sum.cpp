#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matriz[7][5], matriz2[7][5], i, j;
    int posI, posJ, result, max=0, sum;

    for ( i = 0; i < 7; i++){
        for (j = 0; j < 5; j++){
            matriz[i][j] = rand() %101;
            sum += matriz[i][j];
        }   
    }
    for (i = 0; i < 7; i++) {
        cout <<"\n"; 
        for (j = 0; j < 5; j++) {
          cout << matriz[i][j] << "\t" ;
        }
    }
   //incomplete 
}
