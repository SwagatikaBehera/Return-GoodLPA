#include<iostream>
using namespace std;

int nFactorial(int n){
    int fact=n;
    for(int i=1;i<n;i++){
        fact=fact*(n-i);
    }
    return fact;
}

int main(){
    int n;
    cin>>n;

    cout<<nFactorial(n);
}