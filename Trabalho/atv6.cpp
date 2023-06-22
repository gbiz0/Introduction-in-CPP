/*
 * Faça um programa que crie uma matriz 6 x 6. Os valores devem ser criados aleatoriamente entre 0 e
 * 80. Mostre a matriz. Em seguida atribuir o valor 0 para os valores ímpares encontrados fora da
 * diagonal principal. Mostre a matriz depois de ter os valores alterados.
 */

#include <iostream>

int main(void) {
    srand(time(NULL));

    int matriz[6][6];
    std::cout << "matriz = \n";
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            matriz[i][j] = rand() % 80;
            if (i != j && (matriz[i][j] % 2 != 0))
                matriz[i][j] = 0;

            std::cout << matriz[i][j] << " ";
        }
        std::cout << '\n';
    }

    std::cout << std::endl;

    return 0;
}
