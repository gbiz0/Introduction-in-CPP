#include<iostream>

using namespace std;

int main() {
	float n1, n2, n3, media, exame;
	
	cout << "Write your first note: ";
	cin >> n1;
	cout << "Write your second note: ";
	cin >> n2;
	cout << "Write your third note: ";
	cin >> n3;
	
	media = n1 + n2 + n3 / 3;
	
	if (media <= 3) { 
		cout << "You are reproved!";
	}
	else if (media >= 4 && media <= 6 ) {
		 exame = 12 - media;
		cout << "You have to go " << exame << " points, make the test!";
	}
	else{
		cout << "You are aproved!";
	}

}
