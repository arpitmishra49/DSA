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
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];

    }
    cout<<"Rotated Array :\n";
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
        

    }

}    