// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row <= n){
//         int col = 1; 
        
//         while(col <= row){
//             cout<<'A' + row -1<<" ";            // ye isko into me convert kr dega output dete hue , that'swhy we need typecasting
            
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
// }



#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int col = 1; 
        
        while(col <= row){
            char ch = 'A' + row -1;                        //typecasting
            cout<<ch<<" ";            
            
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}