/*Faça um programa que receba o salário inicial de um funcionário, 
calcule e mostre o novo salário acrescido de bonificação e de auxílio escola*/
#include <iostream>

using namespace std;

int main(){
    int salary, newsalary; 
    cout << "Write your current salary: ";
    cin >> salary;

    if (salary < 500) {
        newsalary = salary + (salary * 0.05);
        cout << "Your new salary is: R$ " << newsalary;
    } else if (salary >= 500 && salary < 1200) {
        newsalary = salary + (salary * 0.12);
        cout << "Your new salary is: R$ " << newsalary;
    } else {
        cout << "You have no bonus";
    }

    if (salary <= 600) {
        cout << " more R$ 150,00 school bonus";
    } else if (salary > 600 && salary < 1200) {
        cout << " more R$ 100,00 school bonus";     
    }
}