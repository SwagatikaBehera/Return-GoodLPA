#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    float num_sum=0,mul=1,result=0,deno_mul=1,deno_sum=0,deno_result=1;

    for(int i=1;i<=n;i++){
        mul=mul*i;
        num_sum=num_sum+i;
        deno_sum=deno_sum+mul;
        deno_mul=deno_mul*mul;
        deno_result=deno_sum*deno_mul;
        result=result+num_sum/deno_result;
    }
    cout<<result;
}