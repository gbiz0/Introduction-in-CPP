/*Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e mostre o cargo, 
o valor do aumento e seu novo salário. */
#include <iostream>

using namespace std;

int main() {
    int position;
    float salary, newsalary;

    cout << "Write your position in the company: ";
    cin >> position;

    cout << "Write your current salary: ";
    cin >> salary;

    if (position == 1){
        newsalary = salary + (salary * 0.5);
        cout << "Your new salary is: " << newsalary;
    } else if (position == 2){
        newsalary = salary + (salary * 0.35);
        cout << "Your new salary is: " << newsalary;
    } else if (position == 3){
        newsalary = salary + (salary * 0.2);
        cout << "Your new salary is: " << newsalary;
    } else if (position == 2){
        newsalary = salary + (salary * 0.1);
        cout << "Your new salary is: " << newsalary;
    } else {
        cout << "This position don't exist";
    }
    return 0;
}