#include <iostream>
using namespace std;

int main() {

    int rows, cols;
    cout << "Enter rows and cols: ";
    cin >> rows >> cols;

    int arr[100][100];

    cout << "Enter matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Reverse each row
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols/2; j++) {
            swap(arr[i][j], arr[i][cols-1-j]);
        }
    }

    // Reverse each column
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows/2; i++) {
            swap(arr[i][j], arr[rows-1-i][j]);
        }
    }

    cout << "\nAfter 180 degree rotation:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
