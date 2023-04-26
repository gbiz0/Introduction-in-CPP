/*Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e C são reais. 
Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o valor digitado para I seja sempre um valor válido, 
ou seja, 1, 2 ou 3, e que os números digitados sejam diferentes um do outro.
*/
#include <iostream>

using namespace std;

int main() {
    int i;
    float a, b, c;

    cout << "Write A value: ";
    cin >> a;
    cout << "Write B value: ";
    cin >> b;
    cout << "Write C value: ";
    cin >> c;

    cout << "Write your I value: ";
    cin >> i;

    if (i == 1) {
        if (a < b && a < c) {
            if (b < c){
                cout << a << " < " << b << " < " << c;
            } else {
                cout << a << " < " << c << " < " << b;
            }
        } else if(b < a && b < c){
            if (a < c){
                cout << b << " < " << a << " < " << c;
            } else {
                cout << b << " < " << c << " < " << a;
            }
        } else {
            if (a < b){
                cout << c << " < " << a << " < " << b;
            } else {
                cout << c << " < " << b << " < " << a;
            }
        }
    } else if (i == 2) {
        if (a > b && a > c) {
            if (b > c){
                cout << a << " > " << b << " > " << c;
            } else {
                cout << a << " > " << c << " > " << b;
            }
        } else if(b > a && b > c){
            if (a > c){
                cout << b << " > " << a << " > " << c;
            } else {
                cout << b << " > " << c << " > " << a;
            }
        } else {
            if (a > b){
                cout << c << " > " << a << " > " << b;
            } else {
                cout << c << " > " << b << " > " << a;
            }
        }
    } else if (i == 3) {
        if  (a > b && a > c) {
            if (b > c){
                cout << b << " , " << a << " , " << c;
            } else {
                cout << c << " , " << a << " , " << b;
            }
        } else if(b > a && b > c){
            if (a > c){
                cout << a << " , " << b << " , " << c;
            } else {
                cout << c << " , " << b << " , " << a;
            }
        } else {
            if (a > b){
                cout << a << " , " << c << " , " << b;
            } else {
                cout << b << " , " << c << " , " << a;
            }
        }
    } else{
        cout << "Your value doesn't exist";
    }

    return 0;
}
