/*Write a program that show all number divied a 5, from 1 to 100*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){

    int contador = 1; //<- the variable for repet have a value 1
    while (contador <= 100) { //<- repeating structure
        if (contador %5 == 0){ //<- conditional 
            cout << "\n" << contador;
        }
        contador ++;
    }
    return 0;    
}