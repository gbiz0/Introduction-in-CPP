#include <locale.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    int cargo, salario;

    cout << "Escreva seu cargo a partir dos seguintes numeros: \n 1 - Escrituário \n 2 - Secretário \n 3 - Caixa \n 4 - Gerente \n";
    cin >> cargo;
    
    cout << "Escreva seu salario: ";
    cin >> salario;

    if(cargo == 1){
        cout << "Seu cargo é Escrituário e seu novo salario é: "<< salario + (salario * 0.5) << "\n" ;
    }else if(cargo == 2 ){
        cout << "Seu cargo é Secretário e seu novo salario é: "<< salario + (salario * 0.35) << "\n" ;
    }else if(cargo == 3){
        cout << "Seu cargo é Caixa e seu novo salario é: "<< salario + (salario * 0.2) << "\n" ;
    }else if(cargo == 4){
        cout << "Seu cargo é Gerente e seu novo salario é: "<< salario + (salario * 0.1) << "\n" ;
    }else{
        cout << "Cargo invalido" << "\n" ;
    }
 }