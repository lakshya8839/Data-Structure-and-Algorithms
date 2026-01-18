#include<iostream>
using namespace std;

//1 -> Even
bool isEven(int a){
    //Odd
    if(a&1){
        return 0;
    } 
    //Even
    return 1; //in place of else we can use directly return. 
}

int main(){
    int num;
    cin >> num;

    if (isEven(num)){
        cout<<"Number is Even" <<endl;
    }else{
        cout<<"Number is Odd" <<endl;   
    }
    return 0;
}