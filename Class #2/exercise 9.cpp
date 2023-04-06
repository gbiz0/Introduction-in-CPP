//EXERCISE: Let's make a code to read a temperature in Fahrenheit and convert to celsius

#include <iostream>

using namespace std;

int main(){
	int fTemperature;
	int cTemperature;
	
	cout <<"Write a temperature in Fahrenheit: ";
	cin>> fTemperature;
	
	fTemperature = (fTemperature - 32)/9;
	
	cTemperature = fTemperature * 5;
	
	cout <<"\nYour temperature in celsius is: "<< cTemperature;
}
