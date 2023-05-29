#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int contador = 0, calculo = 0, media, conta;
    while(contador <= 80) {
     if (contador % 2 == 0){
        calculo = calculo + contador;
   } else {
        cout << contador; 
   }
    conta ++;

    }
    media = calculo / conta;
    cout << "The result is: "<< calculo;
    return 0;
}