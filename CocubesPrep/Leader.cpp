#include<iostream>
using namespace std;
#include<string>
#include<vector>
int main(){
    int arr[6]={16, 19, 4, 3, 8, 3};
    vector<int> ans;
    for(int i=0;i<6;i++){
        bool flag=true; 
        for(int j=i+1;j<6;j++){
            if(arr[i]<arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i]<<" ";
        }
        

    }
}