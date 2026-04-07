#include<iostream>
using namespace std;
bool strictlyIncreasing(int arr[],int n){
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cnt++;
        
        if(cnt>1){
            return false;
        }
        if(i>0 && arr[i-1]>=arr[i+1]){
            arr[i+1]=arr[i];
        }
        }

    }
    return true;
    
}
int main(){
    int arr[4]={1,3,2,1};
    if(strictlyIncreasing(arr,4)){
        cout<<"YEs";

    }
    else{
        cout<<"No";

    }
}