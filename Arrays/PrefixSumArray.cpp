#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,5,6,7};
    //Precomputation Array
    int PSUM[5];
    PSUM[0]=arr[0];
    for(int i=1;i<5;i++){
        PSUM[i]=PSUM[i-1]+arr[i];

    }
    for(int i=0;i<5;i++){
        cout<<PSUM[i]<<" ";

    }
    return 0;
    
}