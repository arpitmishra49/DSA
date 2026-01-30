#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=-1;
    int pmax[n];
    for(int i=0;i<n;i++){
       if(arr[i]>max){
          pmax[i]=arr[i];
          max=arr[i];
       } 
       else{
           pmax[i]=max;
       }
    }
    int smax[n];
    int max1=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max1){
            smax[i]=arr[i];
            max1=arr[i];
        }
        else{
            smax[i]=max1;
        }
    }
    int ans=0;
    for(int i=1;i<n-1;i++){
        int h1=pmax[i-1];
        int h2=smax[i+1];
        int decid_h=min(h1,h2);
        if(decid_h<arr[i]){
            ans=ans+0;
        }
        if(decid_h>arr[i]){
            ans=ans+(decid_h-arr[i]);
        }
        
    }
    cout<<ans;
    
    return 0;
}