#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,6,-2,-5,7,3};
    int max=INT_MIN;
    for(int i=0;i<6-1;i++){
        if(arr[i]*arr[i+1]>max){
            max=arr[i]*arr[i+1];
        }
    }
    cout<<max;
    

}