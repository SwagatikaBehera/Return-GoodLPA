#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float calculator(float a,float b){
    char op;
    cin>>op;

    switch(op)
    {
        case '+':
            return add(a,b);
            break;
         case '-':
            return a-b;
            break;
         case '*':
            return a*b;
            break;
         case '/':
            return a/b;
            break;
    }
}

int main(){
    float a,b;
    cin>>a>>b;

    cout<<calculator(a,b);

}