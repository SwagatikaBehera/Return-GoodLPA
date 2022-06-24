#include <iostream>
using namespace std;

int main() {
        int N;
        cin>>N; //Total count of problems in two contests
        string a[N];
        
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        int start=0,ltime=0;
        for(int i=0;i<N;i++){
           if(a[i]=="START38")
              start++;
            if(a[i]=="LTIME108")
              ltime++;
        }
        cout<<start<<" "<<ltime;
    
	return 0;
}
