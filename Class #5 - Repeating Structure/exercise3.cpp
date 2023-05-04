/*Write a program that goes through a loop 100 times and prints only odd numbers*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i;

    for (i = 1; i <= 100; i++){
        if (i % 2 != 0){
            cout << i << "\n";
        }
    }
    
    return 0;
}