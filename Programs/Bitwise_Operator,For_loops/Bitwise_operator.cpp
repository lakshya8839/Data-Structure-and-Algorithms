#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 6;

    //concept of bitwise operator like &(AND) , |(OR) , ~(NOR) , ^(XOR)

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "~a = " << ~a << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

    //concept of left shift and right shift operators
    cout<< (17>>1)<<endl;
    cout<< (17>>2)<<endl;
    cout<< (19<<1)<<endl;
    cout<< (21<<2)<<endl;

    //pre-increment/decrement and post-increment/decrement operators

    int i = 7;

    cout<< (++i) <<endl;
    //8

    cout<< (i++) <<endl;
    //8 , i = 9

    cout<< (i--) <<endl;
    //9 , i = 8

    cout<< (--i) <<endl;
    //7 , i = 7


}
