/*Write a program that displays all numbers divisible by 3 between 50 and 200*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, result, num;

    for (i = 50; i <= 200; i++){ 
        if (i % 3 == 0) {
         cout << "\n" << i;   
        }
    }
    return 0;
}