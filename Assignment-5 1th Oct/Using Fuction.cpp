//Find the Factorial of a number

#include <iostream>
using namespace std;
int factorial(int a);


int main()
{
    int a;
    cout << "Enter Number";
    cin >> a;
 int c = factorial(a);
  cout << c;
}
int factorial(int a)
{
    int in = 1;
    for (int i = 1; i <= a; i++) {
        in = in * i;

    }

    
    return in;

   
   
}

    
        









