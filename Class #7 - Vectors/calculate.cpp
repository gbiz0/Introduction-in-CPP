/*Make a program that recive 7 notes and calcule the mean*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    float vet[7], mean, sum;
    int i;

    for (i = 0; i < 7; i++){
        cout << "Write the note of "<<i+1<< "º student: ";
        cin >> vet[i];

        sum += vet[i];
    }
    mean = sum / 7;
    cout << "The mean is: " << mean; 
}