#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;

    m["aditi"]=18;
    m["Aditi"]=19;
    m["aditi"]=17;
    m["mom"]=48;
    m["sam"]=23;

    for(auto e:m){
        cout<<e.first<<":" <<e.second<<"\n";
    }
   
}