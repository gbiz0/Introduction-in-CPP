#include<iostream>

using namespace std;

int main() {
	float n1, n2, n3, media;
	
	cout << "Write your points in homework: ";
	cin >> n1;
	cout << "Write your points in avaliation: ";
	cin >> n2;
	cout << "Write your points in final exame: ";
	cin >> n3;
	
	media = (n1 * 0.2) + (n2 * 0.3) + (n3 * 0.5);
	
	if (media >= 8 && media <= 10) { 
		cout << "A";
	} else if (media >= 7 && media <= 7.9) { 
		cout << "B";
	} else if (media >= 6 && media <= 6.9) { 
		cout << "C";
	} else if (media >= 5 && media <= 5.9) { 
		cout << "D";
	} else{
		cout << "E";
	}
}
