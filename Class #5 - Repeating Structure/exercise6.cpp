/*Write a program to calculate the table of 7*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, result;

    for (i = 1; i <= 10; i++){ 
        result = i * 7;

        cout << "\n 7 x "<< i <<" = " << result;
    }
    return 0;
}