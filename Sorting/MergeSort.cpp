#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int k=0;
    int temp[100];
    while(i<=mid &&j<=right){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }

    }
    while(i<=mid){
        temp[k++]=arr[i++];

    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(int i=0;i<k;i++){
        arr[left+i]=temp[i];
    }

}
void mergeSort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main(){
    int arr[10]={12,2,5,6,8,34,45,123,45,90};
    mergeSort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}