/*Write a program to calculate the table of any number*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, result, num;
    
    cout << "Write a number: ";
    cin >> num;

    for (i = 1; i <= 10; i++){ 
        result = i * num;

        cout << "\n" << num << " x " << i <<" = " << result;
    }
    return 0;
}