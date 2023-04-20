#include<iostream>

using namespace std;

int main() {
	int number;
	
	cout << "Write a number: ";
	cin >> number;
	
	if (number <= 50) //the program will identify if the entered number is equal or smaller to 50
		cout << "Your number is equal or smaller to 50";
	else
		cout << "Your number NOT is smaller to 50";
}
