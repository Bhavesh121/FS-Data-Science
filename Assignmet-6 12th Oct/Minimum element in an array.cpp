// Minimum element in an array

#include <iostream>
using namespace std;

int main()
{
	int a[50], i, n, in = 1;

	cout << "Enter n numbers of Arrays\n ";
	cin >> n;
	cout << "Enter Arrays\n ";
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = a[0];
	for (i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}

	cout << "Minimum Element\n" << min;

	return 0;


}







