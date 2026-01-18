#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "printing the array" << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl << "printing done!!" << endl;
}

int main(){
    int size = 5;
    int arr2[5] = {2, 7, 1, -4, 11};

    printArray(arr2, size);

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr2[i];
    }

    cout << "Sum of array is: " << sum << endl;
}
