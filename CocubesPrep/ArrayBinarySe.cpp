#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[5]={12,23,45,67,120};
    int s=0;
    int e=size-1;
    
    int key;
    cout<<"Enter the value to be searched for";
    cin>>key;
    while(s<=e){
        int mid=s+(e-s)/2;
    if(arr[mid]==key){
        cout<<"Found the element";
        break;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;

    }
    }

}