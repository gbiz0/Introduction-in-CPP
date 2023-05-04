/*Make a program that the user must type 7 integers and then show the total value of the sum of the numbers typed*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, num;
    float result;

    for (i = 1; i <= 7; i++){ 
        cout << "\n Write a number: ";
        cin >> num;

        result = result + num;
    }

    cout << "Your result is: " << result;
    
    return 0;
}