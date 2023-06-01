//Make a program that recive 5 values for one vector of integer and show the values writed by user
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int vet [5], i;

    for (i = 0; i < 5; i++){
        cout << "Write 5 numbers: ";
        cin >> vet[i];
    }

    cout << "\nYour numbers: ";
    for (i = 0; i < 5; i++){
        cout << "\n" << vet[i];
    }

    return 0;
}