/*LOGICAL OPERATORS
Simbols:
	&& = And
	|| = Or
	! = Not
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main() {
	float height, value;
	char *name = (char *)calloc(30, sizeof(char));
	char genre[1];
	
	cout << "Write your name: ";
	cin >> name;
	cout << "Write your height: ";
	cin >> height;
	cout << "Write your sex (m ou f): ";
	cin >> genre;
	
	if (strcmp (genre, "m") == 0) { 
		value = (72.2 * height) - 58;
	}
	else{
		value = (62.1 * height) - 44.7;
	}
	cout << name << ", your ideal weigth is: "<<value;

	free(name);
}
