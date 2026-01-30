#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int number=n;
    int n2=n;
    int count=0;
    while(number>0){
        number=number/10;
        count=count+1;

    }
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+pow(digit,count);
        n=n/10;
    }
    if(sum==n2){
        cout<<"Yes it is ";

    }
    else{
        cout<<"No it is not ";


    }
}