/*Make a program that receives 2 real numbers and shows the division of the first by the second.
- If the second equals 0, impossible division;
- Repeat 5 times;
- Show the result of each interaction;
*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, num1, num2;
    float result;

    for (i = 1; i <= 5; i++){
        cout << "\n Write your first number: ";
        cin >> num1;
        cout << "\n Write your second number: ";
        cin >> num2;
        if (num2 == 0) {
            cout << "Impossible Division";
        } else {
            result = num1 / num2;
            cout << "\n Result of division: " << result;
        }
    }
    
    return 0;
}