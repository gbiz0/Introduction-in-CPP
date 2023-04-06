//EXERCISE: Let's make a code to read and calculate the age of people, and print the age in years and days

#include <iostream>

using namespace std;

int main(){
	int age;
	int inDays;
	
	cout <<"Write your age: ";
	cin>> age;
	
	inDays = age * 365;
	
	cout <<"Your age in year is: "<<age;
	cout <<"\nYour age in days is: "<<inDays;
}
