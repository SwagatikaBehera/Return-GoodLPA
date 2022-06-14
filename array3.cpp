#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    float num_sum=0,mul=1,result=0,deno_mul=1;

    for(int i=1;i<=n;i++){
        mul=mul*i;
        num_sum=num_sum+mul;
        deno_mul=deno_mul*mul;
        result+=num_sum/deno_mul;
    }
    cout<<result;
}