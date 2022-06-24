#include<iostream>
using namespace std;

int main(){
    int a[]={108,39,17,40,28,40,50,45};
    int n=sizeof(a)/sizeof(a[0]); 

    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
          if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       }
    }

    for (int i = 0; i < n; i++)
         cout<< a[i] <<" ";

    cout<<"\n";
    int k,sum=0;
    cin>>k;
    for(int i=0;i<n;i++){
        if(i<k||i>=n-k)
          sum+=a[i];
    }
    cout<<sum;
}