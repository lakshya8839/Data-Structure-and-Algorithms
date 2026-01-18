#include<iostream>
using namespace std;

int main(){

    // int n;
    // cout<<"enter the value of n" <<endl;
    //cin>>n;



    // for loop -->  for(initialization; condition ; operation)

    cout<<"printing count from 1 to n"<<endl;
    // int i =1 ;
    // for( ; ; ){                           //nothing in for loop is necessary conditon , ye bina kisi chiz ke be run krta h..space chordo or ; ldado..but use end hone ke liye condition ki jarurat pdti h..so we can use break.
    //     if(i<=n){
    //         cout<< i <<endl;

    //     }
    //     else{
    //         break;                         // used to stop the infinite loop
    //     }

    //     i++;
    // }



    // for(int a = 0 , b =1; a<=0 && b<=1 ; a--, b--){               // In this case condition is wrong..
    //     cout<< a <<" "<< b << endl;
    // }



    for(int a = 0 , b =1; a>=0 && b>=1 ; a--, b--){               //we corrected the condition , we used multiple conditions here!!
        cout<< a <<" "<< b << endl;
    }
}

