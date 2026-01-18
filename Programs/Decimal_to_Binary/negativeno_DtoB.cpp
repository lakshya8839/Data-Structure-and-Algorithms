#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int bit;
    int carry = 1;
    int i = 0;

    // If number is negative, work with its magnitude
    if (n < 0) {
        n = -n;
    }

    cout << "\n2's Complement (32-bit):\n";

    while (i < 32) {
        bit = n & 1;

        // 1's complement
        if (bit == 0)
            bit = 1;
        else
            bit = 0;

        // add 1
        if (carry == 1) {
            if (bit == 1) {
                bit = 0;
                carry = 1;
            } else {
                bit = 1;
                carry = 0;
            }
        }

        cout << bit;
        n = n >> 1;
        i++;
    }

    cout << endl;
    return 0;
}
