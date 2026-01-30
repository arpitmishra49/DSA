#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[10]={12,34,56,23,11,9,90,31,41,12};
    for(int i=0;i<10;i++){
        if(isPrime(arr[i])){
            cout<<arr[i]<<endl;

        }
        else{
            continue;
        }
    }
    return 0;

}
//-----------------------------------------------------Time Complexity O((n)sqrt(n))!!!!!-------------------------->