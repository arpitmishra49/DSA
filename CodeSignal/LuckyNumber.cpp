#include<iostream>
using namespace std;
bool luckyNumber(int n){
    int temp=n;
    int cnt=0;
    int sum=0;
    while(temp){
        int digit=temp%10;
        cnt++;
        sum=sum+digit;
        temp=temp/10;

    }
    if(cnt%2!=0){
        return false;

    }
    temp=n;
    int half=cnt/2;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<half;i++){
        int digit=temp%10;
        sum2=sum2+digit;
        temp=temp/10;

        
    }
    for(int i=0;i<half;i++){
        int digit=temp%10;
        sum1=sum1+digit;
        temp=temp/10;
        
    }
    if(sum1==sum2){
        return true;

    }
    return false;


    
    


}