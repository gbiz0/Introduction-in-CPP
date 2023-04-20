//EXERCISE: Let's make a code for recive a salary and calculates a 15% raise

#include <iostream>

using namespace std;

int main(){
	int salary;
	int newSalary;
	
	cout <<"Write your current salary: ";
	cin>> salary;
	
	newSalary = salary + (salary * 0.15);
	
	cout <<"Your new salary, after raise, is: "<< newSalary;
}
