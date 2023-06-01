/*Make a program that recive 2 values from 4 position of real numbers
Sum values and store to thrid vector in the same position*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int i;
    float vet1[4], vet2[4], vet3[4];

    for (i = 0; i < 4; i++){
        cout << "Write the vector 1 ["<<i+1<<"]: ";
        cin >> vet1[i];
        cout << "Write the vector 2 ["<<i+1<<"]: ";
        cin >> vet2[i];

        vet3[i] = vet1[i] + vet2[i];
    }
    
    for (i = 0; i < 4; i++){
        cout << "\nThe vector "<<i+1<<" is ["<<vet3[i]<<"]";
    }
}
