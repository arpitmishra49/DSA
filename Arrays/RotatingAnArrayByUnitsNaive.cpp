#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the array \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k \n";
    cin>>k;
    for(int j=0;j<k%n;j++){
        int x=arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=x;
    }

    cout<<"Rotated Array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}