#include<iostream>

using namespace std;

int main() {
	int Fnumber;
	int Snumber;
	
	cout << "Write a first number: ";
	cin >> Fnumber;
	cout << "Write a second number: ";
	cin >> Snumber;
	
	if (Fnumber > Snumber) //the program will identify which number is bigger
		cout << "Your first number is bigger to second";
	else
		cout << "Your second number is bigger to first";
}
