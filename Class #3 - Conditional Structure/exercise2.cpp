#include<iostream>

using namespace std;

int main() {
	int number;
	
	cout << "Write a number: ";
	cin >> number;
	
	if (number >= 1500) //the program will identify if the entered number is equal or bigger to 1500
		cout << "Your number is equal or bigger to 1500";
	else
		cout << "Your number is NOT bigger to 1500";
}
