//Find the Factorial of a number

#include <iostream>
using namespace std;


int main()
{
    int i, a, in = 1;

    cout << "Enter number   ";
    cin >> a;

    for (i = 1; i <= a; i++)

        in = in * i;
    cout << "factorial of number  " << a << " is " << in;







}

