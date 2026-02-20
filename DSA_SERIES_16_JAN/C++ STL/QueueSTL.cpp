#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;

    q.push("lakshya");
    q.push("Chalana");
    q.push("lc");

    cout<<"First Element-> "<<q.front()<<endl;

    q.pop();
    cout<<"First Elemnent-> "<<q.front()<<endl;
}