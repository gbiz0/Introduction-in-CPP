/*Faça um programa que receba:
	    O código de um produto comprado, supondo que a digitação do código do produto seja sempre válida, isto é, 
        um número inteiro entre 1 e 10.
	    O peso do produto em quilos.
	    O código do país de origem, supondo que a digitação do código seja sempre válida, isto é, um número inteiro entre 1 e 3.
	Calcule e mostre:
	    O peso do produto convertido em gramas.
	    O preço total do produto comprado.
	    O valor do imposto, sabendo que ele é cobrado sobre o preço total do produto comprado e depende do país de origem.
	    O valor total, preço total do produto mais imposto.
*/

#include <iostream>

using namespace std;

int main() {
    int codeprod, weight, codecountry, gr;
	float tax, value;

	cout << "Write code of product (from 1 to 10): ";
	cin >> codeprod;
	cout << "Write the weight of (in kg): ";
	cin >> weight;
	cout << "Write code of country (from 1 to 3): ";
	cin >> codecountry;

	gr = weight * 1000;

	if (codecountry == 1) {
		tax = 0;
		if (codeprod >= 1 && codeprod <= 4) {
			value = (gr * 10) * tax;
			cout << "Pay: R$" << value;
		} else if (codeprod >= 5 && codeprod <= 7) {
			value = (gr * 25) * tax;
			cout << "Pay: R$" << value;
		} else if (codeprod >= 8 && codeprod <= 10) {
			value = (gr * 35) * tax;
			cout << "Pay: R$" << value;
		} else {
			cout << "This code doesn't exist";
		}
	} else if (codecountry == 2) {
		tax = 0.15;
		if (codeprod >= 1 && codeprod <= 4) {
			value = (gr * 10) * tax;
			cout << "Pay: R$" << value;
		} else if (codeprod >= 5 && codeprod <= 7) {
			value = (gr * 25) * tax;
			cout << "Pay: R$" << value;
		} else if (codeprod >= 8 && codeprod <= 10) {
			value = (gr * 35) * tax;
			cout << "Pay: R$" << value;
		} else {
			cout << "This code doesn't exist";
		}
	} else if(codecountry == 3) {
		tax = 0.25;
		if (codeprod >= 1 && codeprod <= 4) {
			value = (gr * 10) * tax;
			cout << "Pay: R$" << value;
		} else if (codeprod >= 5 && codeprod <= 7) {
			value = (gr * 25) * tax;
			cout << "Pay: R$" << value;
		} else if (codeprod >= 8 && codeprod <= 10) {
			value = (gr * 35) * tax;
			cout << "Pay: R$" << value;
		} else {
			cout << "This code doesn't exist";
		}
    } else {
        cout << "This code doesn't exist";
    }
    return 0;
}