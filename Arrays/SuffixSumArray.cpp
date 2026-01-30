#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,5,6,7};
    //Precomputation Array
    int SSUM[5];
    SSUM[4]=arr[4];
    for(int i=4;i>=0;i--){
        SSUM[i-1]=SSUM[i]+arr[i-1];

    }
    for(int i=0;i<5;i++){
        cout<<SSUM[i]<<" ";

    }
    return 0;
    
}