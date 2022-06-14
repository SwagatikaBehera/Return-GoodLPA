#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p1_score,p2_score,s1=0,s2=0,lead1,lead2,lead=0,winner;
	cin>>n;
	
	for(int i=0;i<n;i++){
	    cin>>p1_score>>p2_score;
	    s1=s1+p1_score;
	    s2=s2+p2_score;

        if(s1>s2){
            lead1=s1-s2;
            if(lead1>lead){
                lead=lead1;
                winner=1;
            }
        }else{
            lead2=s2-s1;
            if(lead2>lead){
                lead=lead2;
                winner=2;
            }
        }
        
	}
    cout<<winner<<" "<<lead;
    
	return 0;
}
