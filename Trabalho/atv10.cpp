/*
 * Faça um programa que crie, aleatoriamente, dois vetores de 10 posições. Em seguida crie um terceiro
 * vetor, de 20 posições, contendo: nas posições pares os valores do primeiro vetor e nas posições
 * impares os valores do segundo vetor.
 */

#include <iostream>

int main(void) {
    srand(time(NULL));

    int v0[10], v1[10], v2[20];

    for (int i = 0; i < 20; ++i) {
        v0[i] = rand() % 10;
        v1[i] = rand() % 10;

        v2[i] = v0[i];
        v2[i + 1] = v1[i];

        std::cout << v2[i] << v2[i + 1] << " ";
    }
    std::cout << std::endl;

    return 0;
}
