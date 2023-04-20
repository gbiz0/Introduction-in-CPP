//EXERCISE: Let's make a code that receives a number and shows its successor and antecedent

#include <iostream>

using namespace std;

int main(){
	int number;
	int successor;
	int antecedent;
	
	cout <<"Write a anyone number: ";
	cin>> number;

	successor = number + 1;
	
	antecedent = number -1;
	
	cout <<"\nYour number: "<< number;
	cout <<"\nYour successor: "<< successor;
	cout <<"\nYour antecedent: "<< antecedent;
}
