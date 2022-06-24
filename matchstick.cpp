#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int A,B;
        cin>>A>>B;
        
        int c=A+B;
        int sum=0;
        
        while(c>0){
          int mod=c%10;
          
          switch(mod){
            case 0: 
              sum=sum+6;
              break;
            case 1: 
              sum=sum+2;
              break;
            case 2: 
              sum=sum+5;
              break;
            case 3: 
              sum=sum+5;
              break;
            case 4: 
              sum=sum+4;
              break;
            case 5: 
              sum=sum+5;
              break;
            case 6: 
              sum=sum+6;
              break;
            case 7: 
              sum=sum+3;
              break;
            case 8: 
              sum=sum+7;
              break;
            case 9: 
              sum=sum+6;
              break;
        }
        c=c/10;
        }
        cout<<sum<<"\n";
    }
	return 0;
}
