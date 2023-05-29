/*Write a program that calcule note and show a mean*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){

    int contador = 1; 
    float nota, media = 0, contaNota;

    while (contador <= 4) { 
        cout << "Write the "<< contador << "º note: \n";
        cin >> nota;// <- recive notes

        contaNota = contaNota + nota;//<- accumulate notes
        contador ++; // interation
    }
    media = contaNota / (contador - 1);
    cout << "\n The mean is: "<< media;
    return 0;    
}