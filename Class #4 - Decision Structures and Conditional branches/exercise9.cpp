/*Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo e,
se forem, verifique se é um triângulo equilátero, isósceles ou escaleno. */

#include <iostream>

using namespace std;

int main() {
    int x, y, z; 

    cout << "Write a first size: ";
    cin >> x;
    cout << "Write a second size: ";
    cin >> y;
    cout << "Write a third size: ";
    cin >> z;

    if (x == y == z) {
        cout << "That's a equilateral triangle";
    } else if (x == y || x == z || z == y) {
        cout << "That's a isosceles triangle";
    } else if (x != y || x != z || z != y) {
        cout << "That's a scalene triangle";
    } else {
        cout << "That's not a triangle";
    }
    return 0;
}