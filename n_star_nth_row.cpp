#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input the value of n: ";
    cin>>n;

    for(int row = 1; row <= n; row++){
        //print {row}no. of stars
        for(int star = 1; star <= row; star++){
            cout<<"* ";
        }

        //change to next row
        cout<<"\n";
    }

    return 0;
}