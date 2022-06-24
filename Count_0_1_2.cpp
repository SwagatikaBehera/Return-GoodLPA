#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={0,1,0,2,1,0,1,0,2,0,2};
    int n=sizeof(a)/sizeof(a[0]);

    // int count_0=0,count_1=0,count_2=0;

    // for(int i=0;i<n;i++){
    //     if(a[i]==0)
    //         count_0++;
    //     if(a[i]==1)
    //         count_1++;
    //     if(a[i]==2)
    //         count_2++;
    // }


    // cout<<count_0<<" "<<count_1<<" "<<count_2<<"\n";

    int freq[]={0,0,0};

    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }

    int i=0;
    while(freq[0]--){
        a[i]=0;
        i++;
    }
     while(freq[1]--){
        a[i]=1;
        i++;
    }
     while(freq[2]--){
        a[i]=2;
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}