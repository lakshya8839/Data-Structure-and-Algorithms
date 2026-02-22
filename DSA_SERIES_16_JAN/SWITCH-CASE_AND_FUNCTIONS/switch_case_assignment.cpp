// #include<iostream>
// using namespace std;

// int main(){
//     int num = 1330;
//     int rem,value,note;
//     if(num>100){
//         rem = num%100;
//         note = num/100;
//         value = 1;
//     }
//     else if(num>20 && num<100){
//         rem = num%20;
//         note = num/20;
//         value = 2;
//     }else{
//         value = 3;
//     }
//     switch (value)
//     {
//     case 1:
//         cout<<"No. of notes of rs.100 : "<<note<<endl;
        
    
//     case 2:
//         cout<<"No. of notes of rs.20 : "<<note<<endl;
        

//     case 3:
//         cout<<"No. of notes of rs.1 :"<<rem<<endl;
//         break;
//     default:
//         break;
//     }
// }




#include<iostream>
using namespace std;

int main(){
    int num = 1330;
    int rem,value,note;

    if(num>100){
        rem = num % 100;
        note = num / 100;
        value = 1;
    }
    else if(num>20 && num<100){
        rem = num % 20;
        note = num / 20;
        value = 2;
    }
    else{
        value = 3;
    }

    switch (value)
    {
    case 1:
        cout<<"No. of notes of rs.100 : "<<note<<endl;

    case 2:
        // ❌ MISTAKE YOU MADE:
        // You forgot that 'note' and 'rem' were still from 100 calculation
        // ✅ FIX: recalculate using remaining amount
        note = rem / 20;
        rem = rem % 20;
        cout<<"No. of notes of rs.20 : "<<note<<endl;

    case 3:
        cout<<"No. of notes of rs.1 : "<<rem<<endl;
        break;
    }
}
