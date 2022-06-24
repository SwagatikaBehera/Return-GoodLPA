#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    cout<<"\n";
    
  if(n>2){
      for(int j=0; j<n-2; j++){
       for(int k=0;k<n;k++){
           int sum=0;
           b[k]=a[k];
           for(int i=j;i<j+3;i++){
              sum=sum+a[i];
              b[i]=sum;
          //   cout<<i<<"="<<" "<<b[i]<<" ";
           }
            c[k]=b[k];
       }
        // for(int i=0;i<n;i++){
        //     cout<<b[i]<<" ";
        // }
        sort(b,b+n); 
         if (equal(b, b + n, c)) {
            m=1;
        } else {
       m=0;
       }
       
        // for(int i=0;i<n;i++){
        //   if(c[i]==b[i]){
        //    m=1;
        //   }else
        //    m=0;
        // }
        // cout<<m;
        // for(int i=0;i<n;i++){
        //     cout<<b[i]<<" ";
        // }
        // cout<<"\n";  
        //  for(int i=0;i<n;i++){
        //     cout<<c[i]<<" ";
        // } cout<<"\n\n"; 
    }

    cout<<m;
  }else{
    if(a[0]<a[1]){
        cout<<"1";
    }
  }
}













    // cout<<"N no. of ponds: ";
    // int N;
    // cin>>N;

    // cout<<"M no. of days: ";
    // int M;
    // cin>>M;

    // int A[N];
    // for(int i=0;i<N;i++){
    //     cin>>A[i];
    // }

    // int New[N-2];
    // int sum=0;





