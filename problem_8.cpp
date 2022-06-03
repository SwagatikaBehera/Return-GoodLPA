#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int row = 1; row<=n;row++){
        for(int space=1;space<row;space++)
        cout<<"  ";
        for(int col = row;col<row+n;col++){
            if(row==1||row==n||col==row||col==row+n-1){
            cout<<"* ";
           }else
           cout<<"  ";
        }
        cout<<"\n";
    }
}