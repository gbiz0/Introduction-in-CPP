//EXERCISE: Let's makea code for read and calculate the rectangle area (base/height)

#include <iostream>

using namespace std;

int main(){
	int base;
	int height;
	int value;
	
	cout <<"Write the value of the base of the rectangle: ";
	cin>> base;
	
	cout <<"Write the value of the height of the rectangle: ";
	cin>> height;
	
	value = base * height;
	
	cout <<"The value of rectangle area is: "<<value;
	
	getchar();
	return 0;
}
