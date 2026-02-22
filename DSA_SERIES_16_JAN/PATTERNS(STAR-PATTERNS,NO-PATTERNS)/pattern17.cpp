#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        // print 1st traingle
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        // print 2nd traingle
        int j = 1;
        while(j <= row){
            cout<<j;
            j = j + 1;
        }

        // print 3rd traingle
        int start = row - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        row = row + 1;
        }
        
    }
    
