/*Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: o produto poderá ter seu 
preço aumentado ou diminuído. 
Faça um programa que receba o preço atual e a venda media mensal do produto, calculi e mostre o novo preço.
*/
#include <iostream>

using namespace std;

int main(){
    int price, buys;
    float newprice;

    cout << "How much is the product? ";
    cin >> price;
    cout << "What is the quantity of products? ";
    cin >> buys;

    if (buys < 500 && price < 30) {
        newprice = price + (price * 0.10);
        cout << "The new price is: R$" << newprice;
    } else if (buys >= 500 && buys < 1200 && price < 30 && price < 80) {
        newprice = price + (price * 0.15);
        cout << "The new price is: R$" << newprice;
    } else {
        newprice = price - (price * 0.20);
        cout << "The new price is: R$" << newprice;
    }
    return 0;
}