/* Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. 
Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.
*/
#include <iostream> 

using namespace std;
int main() {
    int n1, n2, n3, n4;

    cout << "Write 3 numbers in ascending order: ";
	cin >> n1;
    cin >> n2;
    cin >> n3;

    cout << "Write a randon numeber out order: ";
	cin >> n4;

    if (n4 > n3) { 
		cout << "The descending order is " << n4 <<" | " << n3 <<" | " << n2 <<" | "<< n1;
	} else if (n4 > n2 && n4 < n3) {
        cout << "The descending order is " << n3 <<" | " << n4 <<" | " << n2 <<" | "<< n1;
    } else if (n4 > n1 && n4 < n2) {
        cout << "The descending order is " << n3 <<" | " << n2 <<" | " << n4 <<" | "<<n1;
    } else {
        cout << "The descending order is " << n3 <<" | " << n2 <<" | " << n1 <<" | "<<n4;
    }
    return 0; 
}