#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    cout<<" printing the array "<<endl;
    //print the array
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << "printing done!! "<< endl;  
}

int main(){
    int third[15] = {2,7};
    int n =15;
    printArray(third, 15);

    int fourth[10] = {1};
    printArray(fourth, 10);
} 