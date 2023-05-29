/*. Faça um Programa que leia 3 notas escolares de 15 alunos. Para cada um dos alunos calcular e apresentar a média aritmética.*/
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){
    float n1, n2, n3, mean;
    int i = 1;
    while (i <= 15){
        cout << "\nStudent " << i << endl;
        cout << "Write the first note: " ;
        cin >> n1;
        cout << "Write the second note: ";
        cin >> n2;
        cout << "Write the third note: ";
        cin >> n3;
        mean = (n1 + n2 + n3) / 3;
        cout << "The mean of student " << i << " is: " << mean << endl;
        i++;
    }
    return 0;

}
    
