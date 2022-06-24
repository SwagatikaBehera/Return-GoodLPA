#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> q;
    int a[]={12,54,3,6,90,45,21,33,4,13};
    int n=10;
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        q.push(a[i]);
    }
    for(int i=k;i<n;i++){
        q.push(a[i]);
        q.pop();
    }
    cout<<q.top();
}