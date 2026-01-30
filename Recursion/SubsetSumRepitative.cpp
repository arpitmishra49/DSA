#include<iostream>
using namespace std;
int countSS(int sum,int i,int N,int arr[]){
    if(sum<0){
        return 0;

    }
    if(sum==0){
        return 1;

    }
    if(i==N){
        return 0;
    }
    return (countSS(sum-arr[i],i,N,arr)+countSS(sum,i+1,N,arr));
}
int main(){
    int arr[3]={1,2,4};
    cout<<countSS(4,0,3,arr);

}