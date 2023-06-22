#include <locale.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    char sexo[2], experiencia[2];
    int idade, porc, masculino, feminino, sim, media, mulherx;

        cout << "Escreva sua idade: ";
        cin >> idade;

    while (idade != 0 )
    {
        cout << "Escreva seu sexo a partir das seguintes instruções: \n M - Masculino \n F - Feminino \n";
        cin >> experiencia;
        
        cout << "Escreva sua experiencia a partir das seguintes instruções: \n S - sim \n N - Não \n";
        cin >> experiencia;

        cout << "Escreva sua idade: \nPara encerrar digite 0 \n";
        cin >> idade;

        if(strcmp (sexo, "M") == 0){
            masculino += 1;
        }else if(strcmp (sexo, "F") == 0){
            feminino += 1;
        }
        if(strcmp (sexo, "M") == 0 && strcmp(experiencia, "S") == 0){
            masculino += 1;
            sim += 1;
            media += idade / sim;
        }

        if(strcmp (sexo, "M") == 0 && idade >= 45){
            masculino += 1;
            porc = (masculino * 100) / masculino;
        }

        if(strcmp (sexo, "F") == 0 && idade <= 21 && strcmp (experiencia, "S") == 0){
            feminino += 1;
            mulherx += 1;
        }
 }
    cout << "-----------------------------------------------------------------------------------\n" ;
    cout << "A quantidade de pessoas do sexo masculino é: "<< masculino << "\n" ;
    cout << "A quantidade de pessoas do sexo feminino é: "<< feminino << "\n" ;
    cout << "A media de idade das pessoas do sexo masculino com experiencia é: "<< media << "\n" ;
    cout << "A porcentagem de homens com mais de 45 anos entre o total dos homens é: "<< porc << "\n" ;
    cout << "A quantidade de mulheres com menos de 21 anos com experiencia é: "<< mulherx << "\n" ;
}