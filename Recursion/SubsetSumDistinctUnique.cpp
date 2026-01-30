#include<iostream>
using namespace std;
int cnt=0;
void allSS(int i,int s,int N,int arr[]){
    if(i==N){
        if(s==0){
            cnt++;
        }
        return;
    }
    allSS(i+1,s-arr[i],N,arr);
    allSS(i+1,s,N,arr);


}
int main(){
    int N=5;
    int arr[5]={1,3,2,5,6};
    allSS(0,6,5,arr);
    cout<<cnt;
    return 0;


    
}