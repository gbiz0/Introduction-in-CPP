#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main (){
    srand(time(NULL));
    int matrix[5][5], i, j;
    int value = 0, number, coutNum;

    for ( i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            matrix[i][j] = rand() %151;
        }   
    }
    cout << "\nWrite one number: \n";
    cin >> number;

    for (i = 0; i < 5; i++) {
      cout <<"\n"; 
      for (j = 0; j < 5; j++) {
        cout << matrix[i][j] << "\t" ;
      }
    }

    for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
        if (number == matrix[i][j]) {
            coutNum++;
            value += 10;  
        }
      }
    }
    cout << "\nYou try " << coutNum << "x";
    cout << "\nYou get a: $" << value;
}
