#include<iostream>
using namespace std;
int main(){
    
    int arr[5]={1,3,4,0,-1};
    int k=3;
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];

    }
    for(int j=k;j<5;j++){
        cout<<sum<<" ";//To print firstly the sum calculated above
        sum=sum+arr[j];
        sum=sum-arr[j-k];

    }
    cout<<sum<<" ";//to print the ans of the last subarray

}