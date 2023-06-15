#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matrix[7][5], matrix2[7][5], i, j;
    int posI, posJ, result, max=0;

    for ( i = 0; i < 7; i++){
        for (j = 0; j < 5; j++){
            matrix[i][j] = rand() %101;
            sum += matrix[i][j];
        }   
    }
    for (i = 0; i < 7; i++) {
        cout <<"\n"; 
        for (j = 0; j < 5; j++) {
          cout << matrix[i][j] << "\t" ;
        }
    }
   //incomplete 
}
