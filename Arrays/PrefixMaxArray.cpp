#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,45,34,14,90};
    int PMAX[5];
    int max=INT16_MIN;
    PMAX[0]=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            PMAX[i]=arr[i];
            max=arr[i];
        }
        else{
            PMAX[i]=PMAX[i-1];
        }
    }
    for(int i=0;i<5;i++){
        cout<<PMAX[i]<<" ";

    }
    return 0;

}