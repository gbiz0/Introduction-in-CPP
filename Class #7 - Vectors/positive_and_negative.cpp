/*Make a program that fill one vector with 8 positions 
calculate and show two vectors
the first vector have a positives numbers
the second vector have a negative numbers
each one with 8 positions*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int vet[8], vetP[8], vetN[8];
    int i, neg, pos;

    for (i = 0; i < 8; i++){
        cout << "Write the number for "<<i+1<< "º position: ";
        cin >> vet[i];

         if(vet[i] >= 0){
            vetP[pos] = vet[i];
            pos++;
        } else{
            vetN[neg] = vet[i];
            neg++;
        }
    }

    cout << "\nThe potive vector is:";
    for (i = 0; i < pos; i++){
        cout << "["<< vetP[i]<<"]";
    }

    cout << "\nThe negative vector is:";
    for (i = 0; i < neg; i++){
        cout << "["<< vetN[i]<<"]";
    }

    return 0;
}