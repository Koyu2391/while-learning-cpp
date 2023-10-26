#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> Myvector = {"ore", "no", "namae"};

    cout << Myvector.capacity() << endl;
    Myvector.push_back("Eren");
    cout << Myvector.capacity() << endl;

    for(int i = 0; i < Myvector.size(); i ++ ) {
        cout << Myvector[i] << " ";
    }
    return 0;
}
