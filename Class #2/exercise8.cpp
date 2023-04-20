//EXERCISE: Let's make a code to calculate the arithmetic mean of 3 grades

#include <iostream>

using namespace std;

int main(){
	float grade1;
	float grade2;
	float grade3;
	float finalValue;
	
	cout <<"Write a first grade: ";
	cin>> grade1;
	
	cout <<"Write a second grade: ";
	cin>> grade2;
	
	cout <<"Write a third grade: ";
	cin>> grade3;

	finalValue = (grade1 + grade2 + grade3) /3;
	cout <<"\nYour average is: "<< finalValue;

}
