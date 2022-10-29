// Write a program to multiply two Arrays.cpp 

#include <iostream>
using namespace std;


int main()
{
	int a[2][2], b[2][2], i, j,c[2][2];

	
	cout << "Enter arrys A Value\n";

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			
			cin >> a[i][j];

		}
	}
	
	
	cout << "Enter arrys B Value\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			
			cin >> b[i][j];

		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] * b[i][j];
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << c[i][j];
		}
	}




}