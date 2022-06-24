#include<iostream>
using namespace std;

int main(){
    // char a='k';
    // char*p =&a;
    // cout<<p<<" "<<*p<<" "<<&a<<" ";
    // p=p+1;
    // cout<<p<<" "<<&a<<" "<<*p<<" "<<&a+1;

    // char a[]={'a','A','0','\0','l'};
    // cout<<a;

    char a=65;
    void* i=&a;
    cout<<*(int*)i;
}