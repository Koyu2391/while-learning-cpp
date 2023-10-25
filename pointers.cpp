#include <iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
    int c = 10;
    cout << &c << endl; 

    int *addofc = &c;

    cout << addofc << endl; // if we printing simply the pointer varialbe, we will get the address of the variable 
    cout << sizeof(addofc) << endl;
 
    cout << *addofc; 
// and if we want to print the value of at the address, we can use the dereference varaible that is just an asterisk 

    return 0;
}
