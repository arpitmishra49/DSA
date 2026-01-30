#include<iostream>
using namespace std;
int GCD(int a ,int b){
    int maxm=max(a,b);
    int minm=min(a,b);
    if(minm==0){
        return maxm;
    }
    else{
        while(maxm%minm!=0){
            int temp=maxm;
            maxm=minm;
            minm=temp;

        }
    }
    return minm;

}
int main(){
    int arr[10]={34,45,23,768,234,124,567,456,234,890};
    int gcd=GCD(arr[0],arr[1]);
    for(int i=2;i<10;i++){
        gcd=GCD(gcd,arr[i]);

    }
    cout<<gcd;
    return 0;
    
}