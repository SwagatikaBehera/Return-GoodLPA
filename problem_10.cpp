#include<iostream>
using namespace std;

int main(){

    int n,counter;
    cin>>n;
    if(n%2==0){
        counter=2;
    }else
    counter=1;

    for(int row =1;row<=n/2;row++){
        int total_star=counter+(row-1)*2;
        int total_space=(n-total_star)/2;

        for(int space=1;space<=total_space;space++){
            cout<<"  ";
        }
        for(int star=1;star<=total_star;star++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    if(n%2==1){
      if(int row = n/2+1){
           for(int star=1;star<=n;star++){
           cout<<"* ";
       }
       cout<<"\n";
      }
    }
    for(int row =n/2;row>=1;row--){
        int total_star=counter+(row-1)*2;
        int total_space=(n-total_star)/2;

        for(int space=1;space<=total_space;space++){
            cout<<"  ";
        }
        for(int star=1;star<=total_star;star++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}