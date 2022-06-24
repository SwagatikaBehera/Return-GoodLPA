#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={85,25,1,32,4,25,6};
    int b[]={81,2};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

    int length;
    if(n>=m)
      length=n;
    else
      length=m;

    set<int> s;

    for(int i=0;i<length;i++){
        s.insert(a[i]);
        s.insert(b[i]);  
    }
    cout<<s.size()<<"\n";

    for(int e:s){
        cout<<e<<" ";
    }
    
}