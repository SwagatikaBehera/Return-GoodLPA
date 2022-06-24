#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={85,25,1,32,4,25,6};
    int n=sizeof(a)/sizeof(a[0]);

    int k;
    cin>>k;

   reverse(a,a+n-k);
   reverse(a+n-k,a+n);
   reverse(a,a+n);

   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
}