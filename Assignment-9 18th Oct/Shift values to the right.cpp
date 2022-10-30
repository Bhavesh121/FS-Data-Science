//given 3 values x,y,z weite a program to circularly shift their values to right

#include <iostream>
using namespace std;
void swap1 (int* a, int* b, int* c);


int main()
{
    int x, y, z;
    cout << "Enter 3 numbers  ";
    cin >> x >> y >> z;
    cout << "before Swaping \t" << x << y << z;

    swap1(&x, &y,&z);
    cout << "Afer Swaping\t";
    cout << x << y << z;
}

void swap1(int *a, int *b, int *c) {

    int temp,temp1;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;

    
    



}


