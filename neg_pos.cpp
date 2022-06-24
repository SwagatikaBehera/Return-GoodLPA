#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a[]={-12,54,-3,6,-90,45,-21,33,-4,13};
    int n=10;
    int neg=0,pos=n-1;

    while(neg<pos){
        while(a[neg]<0)
          neg++;
        while(a[pos]>0)
          pos--;
        if((a[neg]>0 && a[pos]<0)&& neg<pos){
            int temp=a[neg];
            a[neg]=a[pos];
            a[pos]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   
}