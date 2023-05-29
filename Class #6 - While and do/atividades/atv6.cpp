/*Um agricultor possui uma certa quantidade de gado em seu pasto. Porém ele não sabe quantos são. 
Ele deseja fazer um cadastro e identificar qual é o animal mais pesado e qual é o mais leve dentre
eles. O programa deve registrar um animal de cada vez e a cada iteração o usuário digitará o peso e o número de identificação.*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    int id, id_heavy, id_light;
    float weight, heavy, light;
    cout << "Write the animal's ID: ";
    cin >> id;
    cout << "Write the animal's weight: ";
    cin >> weight;
    heavy = weight;
    light = weight;
    id_heavy = id;
    id_light = id;
    while (id != 0){
        cout << "Write the animal's ID: ";
        cin >> id;
        cout << "Write the animal's weight: ";
        cin >> weight;
        if (weight > heavy){
            heavy = weight;
            id_heavy = id;
        }
        if (weight < light){
            light = weight;
            id_light = id;
        }
    }
    cout << "The heaviest animal is the one with ID " << id_heavy << " and its weight is " << heavy << endl;
    cout << "The lightest animal is the one with ID " << id_light << " and its weight is " << light << endl;
    return 0;
}