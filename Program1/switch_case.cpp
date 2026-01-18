#include<iostream>
using namespace std;

int main(){
    int num = 1;
    int i;
    switch (num)
    {
    case 1:
        for(i=0;i<=num;i++){
            cout<<"num is printed"<<endl;
            //continue; // not valid in switch case 
           break;
        }   
    case 2:
        cout<<"value of num is "<<num<<endl;
        break;
    default:
        cout<<"This is the default case"<<endl;
        break;
    }
}