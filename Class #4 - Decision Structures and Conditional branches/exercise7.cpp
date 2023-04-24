/*Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, 
    o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule e mostre o salário a receber do 
    funcionário de acordo com as regras:
	O valor da hora trabalhada é igual a 1/5 do salário mínimo;
	O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
	Para cada dependente, acrescentar R$ 32,00;
	Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%;
	O salário bruto é igual ao salário do mês mais o valor dos dependents mais o valor das horas extras;
*/
#include <iostream>

using namespace std;

int main(){
	int salary, hours, dependents, extrahours; 
	float newsalary;

	cout << "Write your salary: ";
	cin >> salary;
	cout << "Write your work hours: ";
	cin >> hours;
	cout << "Have depedents in your house? How much?";
	cin >> dependents;
	cout << "Write you extra hours of work: ";
	cin >> extrahours;


	return 0;
}