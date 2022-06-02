#include<iostream>
using namespace std;


    //n=3    * *     n=5   *   *  n=4  *  *
    //        *             * *         **
    //       * *             *          **  
    //                      * *        *  *
    //                     *   *


int main(){
    int n;
    cin>>n;
   for(int row =1;row<=n/2;row++){
       int total_space=(row-1)*2;
       int total_star=n-total_space;
       for(int space = 1; space<=total_space/2;space++){
           cout<<"  ";
       }
       for(int star = 1; star<=total_star;star++){
           if(star == 1 || star ==total_star)
               cout<<"* ";
           else
           cout<<"  ";
       }
       cout<<"\n";
   }

  if(n%2==1){
      int row = n/2+1;
      for(int space =1; space<=row-1;space++){
          cout<<"  ";
      }
      cout<<"* \n";
  }

   for(int row =n/2;row>=1;row--){
       int total_space=(row-1)*2;
       int total_star=n-total_space;
       for(int space = 1; space<=total_space/2;space++){
           cout<<"  ";
       }
       for(int star = 1; star<=total_star;star++){
           if(star == 1 || star ==total_star)
               cout<<"* ";
           else
           cout<<"  ";
       }
       cout<<"\n";
   }

}
    
