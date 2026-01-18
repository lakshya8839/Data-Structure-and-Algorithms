#include<iostream>
using namespace std;

// int main(){
//     int num = 5;
//     for(int i=0; i<=num ; i++){
//         for(int j = 0; j < 2*(num-i)-1; j++ ){
//             cout<<" ";
//         }
//         for(int k = 0; k < 2 * i - 1; k++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
// }


int main() {
    int num = 5;

    // Top half
    for (int i = num ; i > 1; i--)  {
        for (int s = 0; s < num - i; s++)
            cout << "  ";

        for (int star = 0; star < 2*i - 1; star++)
            cout << "* ";

        cout << "\n";
    }

    // Bottom half
    for (int i = 1; i <= num; i++){
        for (int s = 0; s < num - i; s++)
            cout << "  ";

        for (int star = 0; star < 2*i - 1; star++)
            cout << "* ";

        cout << "\n";
    }

    return 0;
}