#include <iostream>
using namespace std;

int main() {
    // int a[100001];
    // int prefix[100001];

    // for(int i=0;i<=100000;i++){
    //     if(i%10==2||i%10==3||i%10==9)
    //         a[i]=1;
    //     else
    //         a[i]=0;
    // }
    // prefix[-1]=0;
    // for(int i=0;i<=100000;i++){
    //     prefix[i]=prefix[i-1]+a[i];
    // }

    //     int l,r;
    //     cin>>l>>r;
    //     cout<<prefix[r]-prefix[l-1]<<" \n";
    //     cout<<prefix[r]<<" "<<prefix[l-1]<<" "<<a[0];
  
    int T;
	cin>>T;// Total no. of test cases
	
	while(T--){
	    int L,R;
	    int count=0;
	    cin>>L>>R;

        int a[R];
        int prefixSum[R];
        for(int i=L;i<=R;i++){
	         if(i%10==2|| i%10==3 || i%10==9)
             {
                a[i]=1;
             }
             else{
                a[i]=0;
             }
             prefixSum[-1]=0;
        for (int i = L; i <=R; i++){
            prefixSum[i]=prefixSum[i-1]+a[i];
        }

    }
    cout<<prefixSum[R]-prefixSum[L-1];

	    // for(int i=L;i<=R;i++){
	    //      if(i%10==2|| i%10==3 || i%10==9)
	    //       count++;
	    // }
	    // cout<<count;
	
}
}
