//EXERCISE: Let's make a code for recive a price of product, the amount and after print the written amount, the written amount and the heat to be paid

#include <iostream>

using namespace std;

int main(){
	int price;
	int amount;
	int value;
	
	cout <<"Write the price of product: ";
	cin>> price;
	
	cout <<"Write the amount of product: ";
	cin>> amount;
	
	value = price * amount;
	
	cout <<"The price write is: "<<price;
	cout <<"\nThe amount write is: "<<amount;
	cout <<"\nThe value for paid is: "<<value;
}
