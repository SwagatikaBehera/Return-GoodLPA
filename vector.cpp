// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    vector<int> v;

//    for(int i=0;i<5;i++){
//     v.push_back(i);
//    }

//    for(auto i=v.begin();i!=v.end();i++){
//      cout<<*i<<" ";
//    }
// }

#include <bits\stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> v;

    for(int i=0;i<N;i++){
      int a;
      cin>>a;
      v.push_back(a);
    }

    for(int e:v){
      cout<<e<<" ";
    }

    sort(v.begin(),v.end());

    cout<<"\n";

     for(int e:v){
      cout<<e<<" ";
    }
    return 0;
}
