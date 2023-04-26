/*Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, 
verifique e mostre a classificação dessa pessoa.
*/
#include <iostream>

using namespace std;

int main() {
    float weight, height;

    cout << "Write your weight: ";
    cin >> weight;
    cout << "Write your height: ";
    cin >> height;

    if (height < 1.20) {
        if (weight <= 60) {
            cout << "Your category is A";
        } else if (weight > 60 && weight <= 90) {
            cout << "Your category is D";
        } else if (weight > 90) {
            cout << "Your category is G";
        }
    } else if (height >= 1.20 && height <= 1.70) {
        if (weight <= 60) {
            cout << "Your category is B";
        } else if (weight > 60 && weight <= 90) {
            cout << "Your category is E";
        } else if (weight > 90) {
            cout << "Your category is H";
        }
    } else if (height < 1.70) {
        if (weight <= 60) {
            cout << "Your category is C";
        } else if (weight > 60 && weight <= 90) {
            cout << "Your category is F";
        } else if (weight > 90) {
            cout << "Your category is I";
        }

    }
    return 0;
}