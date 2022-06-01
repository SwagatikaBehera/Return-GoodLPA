#include<iostream>
using namespace std;

    //n=3    ***     n=5   *****  n=4  ****
    //        *             ***         **
    //       ***             *          **  
    //                      ***        ****
    //                     *****

int main(){
    int n;
    cin>>n;
    // for n/2 rows 
    for(int row = 1; row <= n/2; row++){
        int total_space = 2*(row-1);
        //print {row - 1} space
        for(int space = 1; space <= row-1; space++){
            cout<<"  ";
        }
        //print {n - total_space*2} star
        for(int star = 1; star <= n-total_space; star++){
            cout<<"* ";
        }
        //change to next line
        cout<<"\n";
    }

    // if n = odd print { 1 } star at n/2 + 1
    if(n%2==1){
        int row = n/2+1;
        for(int space = 1; space <= row-1; space++){
            cout<<"  ";
        }
        cout<<"* \n";
    }
   // print above star in reverse order
   for(int row = n/2; row >= 1; row--){
        int total_space = 2*(row-1);
        //print {row - 1} space
        for(int space = 1; space <= row-1; space++){
            cout<<"  ";
        }
        //print {n - total_space*2} star
        for(int star = 1; star <= n-total_space; star++){
            cout<<"* ";
        }
        //change to next line
        cout<<"\n";
    }

    return 0;
}