#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={12,34,45,67,80};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}