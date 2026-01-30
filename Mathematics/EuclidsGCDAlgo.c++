#include<iostream>
using namespace std;
int gcd(int a ,int b){
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
    int a;
    int b;
    cout<<"Enter the numbers -->";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
    
    
}