#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 1; // Counter variable to print numbers
    for (int i = 1; i <= n; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for columns
            cout << num << " ";
            num++; // Increment counter
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
