#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int a[N][N];
    for(int i=0;i<N;i++){         //j=coloumn
        for(int j=0;j<N;j++){
           cin>>a[i][j];
        }
    }

    cout<<"\n";

    for(int i=0;i<N;i++){         //j=coloumn
        for(int j=0;j<N;j++){
           cout<<a[i][j]<<" ";
        }
         cout<<"\n";
    }
     cout<<"\n";
     
    int sum=INT8_MIN;
    int result=0;

    for(int i=0;i<N-2;i++){
        for(int j=0;j<N-2;j++){
              result=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
              if(result>sum)
                sum=result;
        }
    }
    cout<<sum;
}