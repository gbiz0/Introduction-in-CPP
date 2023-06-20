/*
 * Faça um programa que crie um vetor de 20 posições. O preenchimento do vetor se dará da seguinte
 * forma: a) o espaço 0 (primeira posição) irá receber um valor aleatório, inteiro, entre 0 e 10; b) os
 * demais campos do vetor deverão acumular os valores do primeiro elemento no segundo; a soma do
 * primeiro e segundo no terceiro; o quarto receberá a soma dos três primeiros, e assim por diante. Ao
 * final, escreva o vetor obtido.
 */

#include <iostream>

int main(void) {
    srand(time(NULL));

    int v[20];
    v[0] = rand() % 10;
    v[1] = v[0];
    for (int i = 2; i < 20; ++i) {
        v[i] = v[i - 2] + v[i - 1];
    }

    for (int i = 0; i < 20; ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
