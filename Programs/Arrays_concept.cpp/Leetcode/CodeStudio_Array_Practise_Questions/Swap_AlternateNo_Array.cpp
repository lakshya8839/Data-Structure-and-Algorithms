#include<iostream>
using namespace std;


// n is size of array
void swapAlternate(int arr[], int n){
    int no = 0;
    int alt_no = 1;

    while(no<=alt_no && alt_no<n && no<n){
        swap(arr[no], arr[alt_no]);
        no += 2;
        alt_no += 2;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr1[6] = {1,4,0,5,-2,15};
    int arr2[5] = {2,6,3,9,4};

    swapAlternate(arr1, 6);
    swapAlternate(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);

    return 0;
}




//--------------Method 2--------------

// #include<iostream>
// using namespace std;

// void printArray(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<< arr[i] << " ";
//     }
//     cout<<endl;
// }
// void swapAlternate(int arr[], int size){

//     for(int i = 0; i<size; i+=2 ){
//         if(i+1 < size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// int main() {
//     int even[8] = {5,2,9,4,7,6,1,0};
//     int odd[5] = {11,33,9,76,43};

//     swapAlternate(even, 8);
//     printArray(even, 8);

//     cout<<endl;

//     swapAlternate(odd, 5);
//     printArray(odd, 5);

//     return 0;
// }
