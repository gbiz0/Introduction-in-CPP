/*make a program for read and  verify  a numeric password  , the user have just 3 tentatives*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main (){

    int contador = 3, password = 123456, tentative; 

    while (contador >= 0) { 
        cout << "Write the password: \n";
        cin >> tentative;
        if (tentative == 123456){
            cout << "ALLOWED ACCESS!";
            break;
        } else {
            cout << "Something went wrong, try again (you have a "<< contador <<" chances)";
            contador --;
        }
    }
    return 0;    
}