//EXERCISE: Let's make a code about a car dealership that pays its employees a fixed amount per month, plus a 5% commission 

#include <iostream>

using namespace std;

int main(){
	int salary;
	int totalCars;
	int reise;
	int finalValue;
	
	cout <<"Write your current salary: ";
	cin>> salary;
	
	cout <<"Write how much cars you saled: ";
	cin>> totalCars;
	
	finalValue = salary + (totalCars * 0.05);
	
	cout <<"Your new salary is: "<< finalValue;
}
