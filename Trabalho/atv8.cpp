/* Faça um programa que crie duas matrizes 8 x 5. Os valores devem ser criados aleatoriamente entre
 *0 e 1000. Mostre as duas matrizes. Em seguida mostre os valores da primeira que aparecem também
 * na segunda matriz, em qualquer posição da segunda (não é necessário mostrar a posição).
 */

#include <iostream>
#include <iterator>
#include <algorithm>

int main(void) {
    srand(time(NULL));

    int m0[8][5], m1[8][5];

    std::cout << "matriz 1: \n";
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 5; ++j) {
            m0[i][j] = rand() % 1000;

            std::cout << m0[i][j] << " ";
        }

        std::cout << '\n';
    }
    std::cout << '\n';

    std::cout << "matriz 2: \n";
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 5; ++j) {
            m1[i][j] = rand() % 1000;

            std::cout << m1[i][j] << " ";
        }

        std::cout << '\n';
    }
    std::cout << '\n';

    std::cout << "repetem: ";
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 8; ++k) {
                bool existe_em_m1 = std::find(std::begin(m1[k]), std::end(m1[k]), m0[i][j]) != std::end(m1[k]);
                if (existe_em_m1)
                    std::cout << m0[i][j] << " ";
            }
        }
    }
    std::cout << '\n';

    return 0;
}
