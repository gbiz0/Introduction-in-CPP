#include <iostream>

using namespace std;

int main(){
	//In this exercise we will show the results of basic math operations
	
	float n1=20, n2=4, sum, difference, division, multiplication;
	
	sum = n1 + n2; //<- will calculate the sum of numbers
	difference = n1 - n2; //<- will calculate the subtraction of numbers
	division = n1 / n2; //<- will to divide the numbers
	multiplication = n1 * n2; //<- will to multiplicade the numbers
	
	//results: 
	cout <<"The Sum is: "<<sum
		<<"\nThe Difference is: "<<difference
		<<"\nThe Division is: "<<division
		<<"\nThe Multiplication is: "<<multiplication;
		 
	getchar();
	return 0;
}
