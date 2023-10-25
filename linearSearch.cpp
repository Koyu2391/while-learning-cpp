#include <iostream>
using namespace std;

int search (int arr [], int key, int size) {
    for(int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        } 
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr [] = {2,876,45,34,76,8,9,4,6};
    int key;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter the value to search in array";
    cin >> key;
    
    int result = search(arr, key, size);

    if (result == -1) {
        cout << "Value not found";
    } else {
        cout << " Value found at index " << result;
    }

    return 0;
}
