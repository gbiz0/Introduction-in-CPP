/*Write a program that calculates the arithmetic mean of 4 grades and displays their average*/
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i;
    float grade, result, mean;

    for (i = 1; i <= 4; i++){ 
        cout << "\n Write a "<< i <<"º grade: ";
        cin >> grade;

        result = (result + grade);
    }

    mean = result / 4;
    cout << "Your mean is: " << mean;
    
    return 0;
}