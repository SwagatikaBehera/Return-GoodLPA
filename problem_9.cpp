#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int row =1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(row==1||col==n||row==col){
               cout<<"* ";
            }else
            cout<<"  ";
        }
        cout<<"\n";
    }
    
}