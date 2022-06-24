#include<iostream>
using namespace std;

int main(){
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(a[0]);
    int max_sum=0,max_start,max_last;

    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int sum=0;
            for(int i=start;i<=end;i++){
                // cout<<a[i]<<" ";
                sum=sum+a[i];
            }
            if(sum>max_sum){
                max_sum=sum;
                max_start=start;
                max_last=end;
            }
            // cout<<"\n";
        }
    }
    cout<<"\n"<<max_sum;
    cout<<"\n";

    for(int i=max_start;i<=max_last;i++){
        cout<<a[i]<<" "; 
    }
    
}