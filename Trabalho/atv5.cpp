/*Faça um programa que crie uma matriz 5 x 2, onde cada coluna corresponde a um lado de um
triangulo retângulo. Crie um vetor de 5 posições que contenha a área dos respectivos triângulos e os
mostrem.*/
#include <iostream>
#include <string.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(void) {
  srand(time(NULL));

  int catetos[5][2], areas[5];
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      catetos[i][j] = (rand() % 10) + 1;
    }

    areas[i] = (catetos[i][0] * catetos[i][1]) / 2;
    std::cout << "lados: [" << catetos[i][0] << ", " << catetos[i][1] << "]\t"
              << "area: " << areas[i] << std::endl;
  }

  return 0;
}
