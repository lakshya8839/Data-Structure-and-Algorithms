
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    char value = 'A';    // Global character counter (must be declared here, not inside the loop, that is common mistake and do not produce the desired output)
    while(row <= n){
        int col = 1; 
     
        while(col <= n){
            cout<<value<<" ";   
            value = value + 1;         
            
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}