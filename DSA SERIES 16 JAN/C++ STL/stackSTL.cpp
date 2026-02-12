#include<iostream>
#include<stack>

using namespace std;
int main(){

    stack<string> s;

    s.push("lakshya");
    s.push("Chalana");
    s.push("lc");

    cout<<"Top Element-> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Elemnent-> "<<s.top()<<endl;

}