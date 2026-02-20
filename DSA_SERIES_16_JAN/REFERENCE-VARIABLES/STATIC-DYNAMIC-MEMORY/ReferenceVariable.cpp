#include<iostream>
using namespace std;

int& func(int a) {                 // BAD PRACTICE
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {                   // BAD PRACTICE
    int* ptr = &n;            //  ---> as it is local variable
    return ptr;
}

void update2(int& n) {
    n++;
}

void update1(int n) {
    n++;
}

int main() {
/*
    int i = 5;

    //Create a ref variable

    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    */

    int n = 5;

    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;

    //func(n);   -------> //Will Generate Warning
    //fun(n);  -------> //Will Generate Warning
    return 0;
}