/*Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com restrições, como salário negativo.
    Menu de opções:
    1. Imposto	2. Novo Salário	3. Classificação
*/
#include <iostream>

using namespace std;

int main()
{
    int option;
    float salary, newsalary;

    cout << "Write your option: 1- Tax | 2- New Salary | 3- Classification ";
    cin >> option;

    cout << "Write your current salary: ";
    cin >> salary;

    if (option == 1)
    {
        if (salary < 500)
        {
            newsalary = salary + (salary * 0.05);
            cout << "Your new salary is: R$" << newsalary;
        }
        else if (salary >= 500 && salary <= 850)
        {
            newsalary = salary + (salary * 0.10);
            cout << "Your new salary is: R$" << newsalary;
        }
        else
        {
            newsalary = salary + (salary * 0.15);
            cout << "Your new salary is: R$" << newsalary;
        }
    }
    else if (option == 2)
    {
        if (salary > 1500)
        {
            newsalary = salary + 25;
            cout << "Your new salary is: R$" << newsalary;
        }
        else if (salary >= 750 && salary <= 1500)
        {
            newsalary = salary + 50;
            cout << "Your new salary is: R$" << newsalary;
        }
        else if (salary >= 450 && salary < 750)
        {
            newsalary = salary + 75;
            cout << "Your new salary is: R$" << newsalary;
        }
        else
        {
            newsalary = salary + 100;
            cout << "Your new salary is: R$" << newsalary;
        }
    }
    else if (option == 3)
    {
        if (salary <= 700)
        {
            cout << "Poorly paid";
        }
        else
        {
            cout << "Well-paid";
        }
    }
    return 0;
}