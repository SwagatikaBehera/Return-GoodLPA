#include<iostream>
#include<math.h>
using namespace std;

void isPrime(int n){
  for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
          cout<<"Not a prime number";
          break;
      }else{
      cout<<"Is a prime number";
      break;
      }
  }
}

int main(){
    int n;
    cin>>n;

    isPrime(n);
}