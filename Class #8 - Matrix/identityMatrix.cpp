#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matrix[5][5], i, j;
    int posI, posJ, num;

    for ( i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            matrix[i][j] = rand() %1;
            if(i == j){
              matrix[i][j] = 1; 
            } else {
                matrix[i][j] = 0;
              }
        }   
    }

    for (i = 0; i < 5; i++) {
      cout <<"\n"; 
      for (j = 0; j < 5; j++) {
        cout << matrix[i][j] << "\t" ;
      }
    }
  }
