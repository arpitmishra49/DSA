#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(true){
        sum=0;
        while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
        }
        if(sum<10){
            break;
        }
        else{
            n=sum;
        }
        
    }
    cout<<sum;
}