//Check if a given number is armstrong

#include <iostream>
using namespace std;

int main() {
    int num, n, rem, res = 0;
    cout << "Enter a number ";

    cin >> num;


    n = num;

    while (n != 0) {

        rem = n % 10;

        res += rem * rem * rem;


        n /= 10;
    }

    if (res == num)
        cout << "is an Armstrong number." << num;

    else
        cout << "is not an Armstrong number" << num;

    return 0;
}