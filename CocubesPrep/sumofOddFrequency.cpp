#include<iostream>
using namespace std;
#include<unordered_map>
int main(){
    unordered_map<int,int> m;
    int arr[15]={1,1,2,2,2,3,4,4,5,5,5,5,6,7,7};
    for(int i=0;i<15;i++){
        m[arr[i]]++;
    }
    int sum=0;

    for(auto pair:m){
        if(pair.second%2!=0){
            sum=sum+pair.first;
        }
    }
    cout<<sum;
    
}