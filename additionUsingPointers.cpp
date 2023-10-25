#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cout << "Enter the 2 numbers to add them" << endl;;
    cin >> x >> y;

    int* ptrx = &x;
    int* ptry = &y;

    int sum = *ptrx + *ptry; 

    cout << "The sum is " << sum << endl;
            return 0;
}
