#include<iostream>
using namespace std;

    //n=3     *     n=5       *
    //       ***             ***
    //      *****           *****
    //                     *******
    //                    *********

int main(){
    int n;
    cin>>n;

    for(int row = 1; row <= n; row++){
        // print {n - row} space
        for(int space = 1; space <= n-row; space++){
            cout<<"  ";
        }
        // print {row - 1}* 2 stars
        for(int star = 1; star <= (row-1)*2; star++){
            cout<<"* ";
        }
        // print { 1 } star
        cout<<"* ";
        // change to next line
        cout<<"\n";
    }

return 0;
}