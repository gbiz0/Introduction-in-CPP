/*Faça um programa que receba um número inteiro e verifique se é par ou ímpar.
*/
#include <iostream> 

using namespace std;
int main() {
    int number;

    cout << "Write a number: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "Is par";
    } else{
        cout << "Is impar";
    }
    return 0; 
}