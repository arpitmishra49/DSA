#include<iostream>
using namespace std;
int main(){
    
    int arr[10]={1,2,3,2,4,2,6,7,2,2};
    int k=4;
    int count=0;
    int x=2;
    for(int i=0;i<k;i++){
        if(arr[i]==x){
        count=count+1;
        }

    }
    for(int j=k;j<10;j++){
        cout<<count<<" ";//To print firstly the sum calculated above
        if(arr[j]==x){
            count++;
        }
        if(arr[j-k]==x){//Only subract when the element removed was equal to x otherwise no need 
            count--;
        }
        // sum=sum+arr[j];
        // sum=sum-arr[j-k];

    }
    cout<<count<<" ";//to print the ans of the last subarray

}