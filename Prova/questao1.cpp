#include <locale.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));
    int matriz[6][6], i, j;

    for ( i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            matriz[i][j] = rand() %151;
            if(i > j){
              matriz[i][j] = 0; 
            }
        }   
    }

    for (i = 0; i < 6; i++) {
      cout <<"\n"; 
      for (j = 0; j < 6; j++) {
        cout << matriz[i][j] << "\t" ;
      }
    }
}