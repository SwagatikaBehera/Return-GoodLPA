#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int total_product=1;
    for(int j=0;j<n;j++){
        total_product=total_product*a[j];
    }

    cout<<total_product<<"\n";

    int num_sum=0,den_sum=0;
    for(int i=0;i<n;i++){
        int result=0;
        result=total_product/ a[i];
        num_sum=num_sum+result;
        den_sum+=a[i];
    }
    cout<<(double)num_sum/total_product;
}

// double a[n];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     double sum=0.00;
//     for(int i=0;i<n;i++){
//         sum=sum+(double)(1/a[i]);
//     }
//     cout<<sum;