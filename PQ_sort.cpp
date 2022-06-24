#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> q;
    int a[]={12,54,3,6,90,45,21,33,4,13};
    int n=10;
   
    for(int i=0;i<n;i++){
        q.push(a[i]);
    }
  
    cout<<"\n";
     for(int i=0;i<n;i++){
        cout<<q.top()<<" ";
        q.pop();
    }
   
}