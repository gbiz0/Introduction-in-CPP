//EXERCISE: Let's make a code in the situation 
//that a new car is the sum of the cost of the factory 
//plus the percentage of the distributor and the taxes (where the surcharges are 13% and 18%, respectively)

#include <iostream>

using namespace std;

int main(){
	int cost;
	int distri;
	int taxes;
	int finalValue;
	
	cout <<"Write the cust of factory: ";
	cin>> cost;
	
	distri = cost * 0.13;
	
	taxes = cost * 0.18;
	
	finalValue = cost + distri + taxes;
	
	cout <<"The cust of car is: "<< cost;
	cout <<"\nThe percentage of the distributor is: "<< distri;
	cout <<"\nThe percentage of the taxes is: "<< taxes;
	cout <<"\nThe total price is: "<< finalValue;
}
