// Binary Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int i,n, in = 1;

    cout << "Enter any Number";
    cin >> n;


    for (i = 1; i <=n; i++)

    in = i % 10;

    if (in == 0) {
        cout << "Number is binary";
    }
    
    

    else if (in == 1) {
        cout << "Number is binary";

    }
    

    else {
        cout << "Number is not Binary";

    }
    i = / 10;

}

