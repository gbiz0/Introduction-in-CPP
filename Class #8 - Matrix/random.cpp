#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matrix[2][2], i, j;

    for ( i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            matrix[i][j] = rand() %11;
        }   
    }
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        cout << matrix[i][j] << "\t" ;
      }

      cout <<"\n"; 
    }
}
