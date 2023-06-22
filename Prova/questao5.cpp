#include <locale.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));
    int matriz[12][12], i, j;
    int vet[12]; i;

    for ( i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            matriz[i][j] = rand() %101;
            if(i == j){
              vet[i] = matriz[i][j] * 2; 
            }
        }   
    }

    cout << "\n Matriz:\n ";    
    for (i = 0; i < 12; i++) {
      cout <<"\n"; 
      for (j = 0; j < 12; j++) {
        cout << matriz[i][j] << "\t" ;
      }
    }

    cout << "\n Vetor:\n ";
    for ( i = 0; i <= 12; i++){
        cout << vet[i] << "\t" ;
        }  
}