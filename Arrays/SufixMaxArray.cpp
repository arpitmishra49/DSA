#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,45,34,14,6};
    int SMAX[5];
    int max=INT16_MIN;
    SMAX[4]=arr[4];
    for(int i=4;i>=0;i--){
        if(arr[i]>max){
            SMAX[i]=arr[i];
            max=arr[i];
        }
        else{
            SMAX[i]=SMAX[i+1];
        }
    }
    for(int i=0;i<5;i++){
        cout<<SMAX[i]<<" ";

    }
    return 0;

}