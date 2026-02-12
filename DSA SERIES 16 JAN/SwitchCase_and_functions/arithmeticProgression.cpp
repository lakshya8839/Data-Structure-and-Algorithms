#include<iostream>
using namespace std;

int arithmeticProgression(int first_term, int difference, int n) {
    return first_term + (n - 1) * difference;
}

int sumOfArithmeticProgression(int first_term, int difference, int n) {
    int sum = int(n / 2) * (2 * first_term + ((n - 1) * difference));
    return sum;
}
int main() {
    int a,d,n;
    cout<<"Enter the first term: ";
    cin>>a;

    cout<<"Enter the difference b/w two terms of AP: ";
    cin>>d; 

    cout<<"Enter the term you want to find: ";
    cin>>n;

    cout<<"nth term: "<<arithmeticProgression(a, d, n) <<endl;

    cout<<"sum of n terms: "<<sumOfArithmeticProgression(a, d, n) <<endl;
}