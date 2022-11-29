
#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    cout << "Enter no of rows and columbs ";
    cin >> rows;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i; j++) {
            cout << " ";
        }
        for (j = 0; j < rows; j++) {
            cout << "* ";

        }

            cout << "\n";

        

    }

}
