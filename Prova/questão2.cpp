#include <locale.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));
    int vetor[13], vetor2[13], i, j;

    for ( i = 0; i < 13; i++){
        cout << "Escreva o valor da "<< i+1 <<"º posição"<< "\t" ;
        cin >> vetor[i];
        }   
    cout << "\n Antes da mudança:\n ";
    for ( i = 0; i < 13; i++){
        cout << vetor[i] << "\t" ;
        }   

    cout << "\n Depois da mudança:\n ";
    for (i = 13; i > -1; i--) {
        vetor2[j] = vetor[i];
        cout << vetor2[j]<< "\t" ;
      }
}