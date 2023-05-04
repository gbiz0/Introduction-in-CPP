//create a 7x repeating loop. Each time ask to enter a whole number and show entered number in row
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, num;

    for (i = 1; i <= 7; i++){
        cout << "\n Write one integer number: ";
        cin >> num;

        cout << "\n Number writed: " << num;
    }
    
    return 0;
}