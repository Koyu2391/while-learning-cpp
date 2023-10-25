#include <iostream>
using namespace std; 

void binsr( int arr[], int key, int length) {

    int left = 0;
    int right = length - 1; 

    while (left <= right) {
        int mid = left = (right - left) / 2;

        if(arr[mid] == key) {
            cout << "Value found at index " << mid << endl;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else { 
            right = mid - 1;
        }
    }
cout << "Value not found";
}

int main(int argc, char const *argv[])
{
    int arr [] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);
    int key;

    cout << "Enter the value to search in the array" << endl;
    cin >> key;

   binsr(arr, key, length); 

    
    return 0;
}
