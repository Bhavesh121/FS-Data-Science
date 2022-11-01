// Factorial of number Using Recurtion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int fact(int n);



void main()
{
    int n, f;

    cout << "enter a number ";

    cin >> n;
    f = fact(n);
    cout << f;
}

int fact(int n)
{
    if (n == 0) {
        return 1;
    }
    else {
        int f = fact(n - 1);
        return n * f;

    }
};