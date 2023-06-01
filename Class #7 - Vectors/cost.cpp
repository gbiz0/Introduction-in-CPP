/* Make a program that 10 values in one vector of real numbers 
This values will represent the cost of each apartment for electricity
Have know what's a biggest value and the number of apartament*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    float vet[10], bigcost = 0;
    int i, ibigcost = 0;

    for (i = 0; i < 10; i++){
        cout << "Write the cost of "<<i+1<< "º apartament: ";
        cin >> vet[i];

        if (vet[i] > bigcost){
            bigcost = vet[i];
            ibigcost = i;
        }
    }
    cout << "The biggest cost is "<<bigcost<<" of "<<ibigcost<<"º apartament";


}
