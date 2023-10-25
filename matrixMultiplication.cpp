#include <iostream>
using namespace std;

void takeINPUT (int arr [3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
}

void printOUTPUT (int arr [3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void multiply (int matA [3][3], int matB[3][3]) {
    int answermatrix [3][3];
    for (int i = 0; i < 3; i++ ) {
        for(int j = 0; j < 3; j++) {
            answermatrix [i][j] = matA[i][j] * matB[i][j];
        }
    }

    printOUTPUT(answermatrix);
}

int main(int argc, char const *argv[])
{
    int matA [3][3];
    int matB [3][3];

    cout << "Enter the value in First Matrix" << endl;
    takeINPUT(matA);

    cout << "Enter the value in Second Matrix" << endl;
    takeINPUT(matB);

    multiply(matA, matB);


    return 0;
}