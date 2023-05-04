#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i; // <- this is the element that will be repeated

    for (i = 1; i < 10; i++){ // <- the repeater count from 1 to 9
        cout << "\ni: "<<i;// <- prit results
    }
    system("PAUSE");// <- pause the print of programm
    return 0;
}