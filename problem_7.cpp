#include<iostream>
using namespace std;


    //n=3    ***     n=5   *****  n=4  ****
    //       ***           ** **       ****
    //       ***           * * *       **** 
    //                     ** **       ****
    //                     *****

int main(){
    int n;
    cin>>n;
    
    for(int row = 1; row<=n;row++){
        for(int col = 1; col<=n;col++){
            if(row==1||row==n||col==1||col==n||col==row||row+col==n+1){
                cout<<"* ";
            }else
            cout<<"  ";
        }
         cout<<"\n";
    }

}
    
