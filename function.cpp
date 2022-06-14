#include<iostream>
using namespace std;

//write a function that is going to take a string as input and it will return a string with all capital letters.
// s="sWagat@iKa"
//s="SWAGAT@IKA"
string inUpperCase(string);

string inUpperCase(string s){
    int n;
    n=sizeof(s);
    for(int i=0;i<n;i++){
        if(s[i]-'a'>=0 && s[i]-'a'<=25){
            s[i]=s[i]-'a'+'A';
        }
    }
    return s;
}

int main(){
    string name = "sWagat@iKa pp#tU*ra";

    cout<<inUpperCase(name);

    return 0;
}