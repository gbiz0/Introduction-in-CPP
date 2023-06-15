#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int matrix[2][2], i, j;

    for ( i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << "\nDigite o valor: ";
            cin >> matrix[i][j];
        }   
    }
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        cout << matrix[i][j] << "\t" ;
      }
    }
}
