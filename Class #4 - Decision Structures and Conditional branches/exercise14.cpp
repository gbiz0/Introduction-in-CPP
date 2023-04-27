/*Faça um programa que receba a medida de um ângulo em graus. Calcule e mostre o quadrante em que 
se localiza esse ângulo. Considere os quadrantes da trigonometria. Considerar graus de 1 a 360.*/

#include <iostream> 

using namespace std;
int main() {
    int angle;
    cout << "Write the measure of angle (from 1 to 360 degrees): ";
    cin >> angle;

    if (angle > 0 && angle <= 90) {
        cout << "The angle is in the first quadrant";
    }
    else if (angle > 90 && angle <= 180) {
        cout << "The angle is in the second quadrant";
    }
    else if (angle > 180 && angle <= 270) {
        cout << "The angle is in the trird quadrant";
    }
    else if (angle > 270 && angle <= 360) {
        cout << "The angle is in the fourth quadrant";
    }
    else {
        cout << "Is out of quadrant" << endl;
    }
    return 0; 
}