#include <locale.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));
    int sal1,sal2, sal3, sal4, totalImposto;
    int impo1, impo2, impo3, impo4;

    cout << "Escreva o valor do seu salario do 1º funcionario: "; 
    cin >> sal1;
    cout << "Escreva o valor do seu salario do 2º funcionario: ";
    cin >> sal2;
    cout << "Escreva o valor do seu salario do 3º funcionario: ";
    cin >> sal3;
    cout << "Escreva o valor do seu salario do 4º funcionario: ";
    cin >> sal4;

    impo1 = sal1 * 0.05;
    impo2 = sal2 * 0.05;
    impo3 = sal3 * 0.05;
    impo4 = sal4 * 0.05;


    totalImposto = impo1 + impo2 + impo3 + impo4;

    cout << "O valor do imposto do 1º funcionario é: " << impo1 << "\n";
    cout << "O valor do imposto do 2º funcionario é: " << impo2 << "\n";
    cout << "O valor do imposto do 3º funcionario é: " << impo3 << "\n";
    cout << "O valor do imposto do 4º funcionario é: " << impo4 << "\n";
    cout << "O valor total do imposto é: " << totalImposto << "\n";




}