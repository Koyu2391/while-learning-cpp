#include <iostream>
using namespace std;

int search(int arr[], int key, int length){
    

    for (int i = 0; i < length; i++){
        if (key == arr[i]) {
            return i;
        }
    }

    return -1;
}

int main(int argc, char const *argv[]){
    int key;
    int arr[] = {34, 334, 546, 32, 6, 4, 67, 75, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the Value to search: ";
    cin >> key;

    int result = search(arr, key, length);

    if (result != -1) {
        cout << "Value found at index: " << result;
    } else {
        cout << "Value not found";
    }

    return 0;
}

// this keyboard 60 percent layout is quite confusing and not everyone can use it tbh 
