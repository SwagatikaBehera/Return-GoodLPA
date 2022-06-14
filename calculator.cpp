#include<iostream>
using namespace std;

int calculator(int a, int b){
    char op;
    cin>>op;
    if(op=='+')
    return a+b;
    if(op=='-')
    return a-b;
    if(op=='*')
    return a*b;
    if(op=='/')
    return a/b;
    if(op=='%')
    return a%b;
    if(op=='^')
    return a^b;

    //  if(a+b)
    //  return a+b;
    //  else if(a-b)
    //  return a-b;
    //  else if(a/b)
    //  return a/b;
    //  else
    //  return a*b;
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<calculator(a,b);
}