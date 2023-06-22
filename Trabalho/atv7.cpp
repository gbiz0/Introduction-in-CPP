/*
 * Leia uma matriz 6 x 6 e atribuir o valor 0 para os valores negativos encontrados fora das diagonais
 * principal e secundaria.
 */

#include <iostream>

int main(void) {
    srand(time(NULL));

    int m[6][6];
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            m[i][j] = rand() % 10;
            if ((i == j || (i + j == 5)) && (m[i][j] % 2 != 0))
                m[i][j] = 0;

            std::cout << m[i][j] << " ";
        }

        std::cout << '\n';
    }

    return 0;
}
