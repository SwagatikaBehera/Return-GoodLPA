#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> p;
    p.push(8);
    p.push(2);
    p.push(8);
    p.push(5);

    cout<<p.top()<<"\n";
    p.pop();
    cout<<p.top()<<"\n";
    p.pop();
    cout<<p.top()<<"\n";

}