/*Faça um programa que receba:
		O código do estado de origem da carga de um caminhão, supondo que a digitação do código 
		do estado seja sempre válida, isto é, um número inteiro entre 1 e 5.
		O peso da carga do caminhão em toneladas.
		O código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro entre 10 e 40.
	Calcule e mostre:
		O peso da carga do caminhão convertido em quilos.
		O preço da carga do caminhão.
		O valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende do estado de origem.
		O valor total transportado pelo caminhão, preço da carga mais imposto.
*/

#include <iostream>

using namespace std;

int main() {
    int codestate, weight, codeload, kg;
	float tax, value;

	cout << "Write code of state (from 1 to 5): ";
	cin >> codestate;
	cout << "Write the weight of load: ";
	cin >> weight;
	cout << "Write code of load (from 10 to 40): ";
	cin >> codeload;

	kg = weight * 1000;

	if (codestate == 1) {
		tax = 0.35;
		if (codeload >= 10 && codeload <= 20) {
			value = (kg * 100) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 21 && codeload <= 30) {
			value = (kg * 250) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 31 && codeload <= 40) {
			value = (kg * 340) * tax;
			cout << "Pay: R$" << value;
		} else {
			cout << "This code doesn't exist";
		}
	} else if (codestate == 2) {
		tax = 0.25;
		if (codeload >= 10 && codeload <= 20) {
			value = (kg * 100) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 21 && codeload <= 30) {
			value = (kg * 250) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 31 && codeload <= 40) {
			value = (kg * 340) * tax;
			cout << "Pay: R$" << value;
		} else {
			cout << "This code doesn't exist";
		}
	} else if(codestate == 3) {
		tax = 0.15;
		if (codeload >= 10 && codeload <= 20) {
			value = (kg * 100) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 21 && codeload <= 30) {
			value = (kg * 250) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 31 && codeload <= 40) {
			value = (kg * 340) * tax;
			cout << "Pay: R$" << value;
		} else {
			cout << "This code doesn't exist";
		}
	} else if(codestate == 4) {
		tax = 0.05;
		if (codeload >= 10 && codeload <= 20) {
			value = (kg * 100) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 21 && codeload <= 30) {
			value = (kg * 250) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 31 && codeload <= 40) {
			value = (kg * 340) * tax;
			cout << "Pay: R$" << value;
		} else {
			cout << "This code doesn't exist";
		}
	}else if(codestate == 5) {
		tax = 0;
		if (codeload >= 10 && codeload <= 20) {
			value = (kg * 100) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 21 && codeload <= 30) {
			value = (kg * 250) * tax;
			cout << "Pay: R$" << value;
		} else if (codeload >= 31 && codeload <= 40) {
			value = (kg * 340) * tax;
			cout << "Pay: R$" << value;
		} else {
			cout << "This code doesn't exist";
		}
	} else{
		cout << "This code doesn't exist";
	}

    return 0;
}