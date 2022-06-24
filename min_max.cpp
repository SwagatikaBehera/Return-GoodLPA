#include<iostream>
using namespace std;

int main(){
    int min_element=INT16_MAX;
    int max_element=INT16_MIN;

    int a[]={1,3,4,5,3,12,3,45,47,767,8787,2,4};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
         min_element=min(min_element,a[i]);
         max_element=max(max_element,a[i]);
    }
    cout<<min_element<<" "<<max_element;
}