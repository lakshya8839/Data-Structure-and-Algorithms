// #include<iostream>
// using namespace std;

// int main(){
// //  int a,b;
// //  cin>>a>>b;               ---------do not Read space, \t(tab), \n (enter) as input and give output------
// //  if(a>b){
// //     cout<<"a is greater than b";
// //  }
// //  else{
// //     cout<<"b is greater than a";
// //  }



// // ------------------Reads space, \t(tab), \n (enter) also as input and give output the ASCII VAlue------
// // a=cin.get();

// // cout<<"Value of a is"<<a<<endl;
// }

#include<iostream>
#include<cctype> // For isupper() and islower()

using namespace std;

int main() {
   char a; // Character input

   a = cin.get();  // Read a single character

    if (isupper(a)) {
        cout << "Input is uppercase" << endl;
    }
    else if (islower(a)) {
        cout << "Input is lowercase" << endl;
    }
    else if (isdigit(a)) {
        cout << "Value is numeric" << endl;
    }
    else {
        cout << "Input is a special character" << endl;
    }

    return 0;
}









