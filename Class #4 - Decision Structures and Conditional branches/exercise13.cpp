/*Faça um programa que receba o salário base e o tempo de serviço de um funcionário. Calcule e mostre:	
O imposto, A gratificação, O salário líquido, ou seja, salário base menos imposto mais gratificação. 
*/

#include <iostream> 

using namespace std;
int main() {
    int salary, service;
    float tax, grat, total;
    
    cout << "Write your salary: ";
    cin >> salary;
    cout << "Write your length of service: ";
    cin >> service;

    if (salary < 200) {
        cout << "Your salary is: R$" << salary;
    } else if (salary >= 200 && salary <=450) {
        tax = salary + (salary * 0.03);
        cout << "Your salary is: R$" << tax;
    } else if (salary > 450 && salary < 700) {
        tax = salary + (salary * 0.08);
        cout << "Your salary is: R$" << tax;
    } else if (salary >= 700) {
        tax = salary + (salary * 0.12);
        cout << "Your salary is: R$" << tax;
    } else {
        cout << "That's option doesn't exist";
    }
    
    if (salary > 500) {
        if (service < 3) {
            grat = tax + 20;
            cout << "Your salary is: R$" << grat;
        } else if (salary >= 3) {
            grat = tax + 30;
            cout << "Your salary is: R$" << grat;
        } else {
            cout << "That's option doesn't exist";
        }
    } else if (salary <= 500) {
        if (service < 3) {
            grat = tax + 23;
            cout << "Your salary is: R$" << grat;
        } else if (salary >= 3 && salary <= 6) {
            grat = tax + 35;
            cout << "Your salary is: R$" << grat;
        }else if (salary > 6) {
            grat = tax + 33;
            cout << "Your salary is: R$" << grat;
        } else {
            cout << "That's option doesn't exist";
        }
    }

    total = grat + tax / 2;

    if (total < 350) {
        cout << "Classification A";
    } else if (total >= 350 && total <= 600) {
        cout << "Classification B";
    } else if (total > 600) {
        cout << "Classification C";
    }
    return 0; 
}