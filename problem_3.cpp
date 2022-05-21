#include<iostream>
using namespace std;

    //n=3     *     n=4       *
    //       **              **
    //      ***             ***
    //                     ****

int main(){
    int n;
    cout<<"input the value of n: ";
    cin>>n;

    for(int row = 1; row <= n; row++){
        // {n-row}no. of space 
        for(int space = 1; space <= n-row; space++){
            cout<<"  ";
        }

        //{row}no. of stars
        for(int star = 1; star <= row; star++){
            cout<<"* ";
        }

        // next row
        cout<<"\n";
    }
}