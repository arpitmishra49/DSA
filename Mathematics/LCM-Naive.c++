#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int lcm=0;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    for(int i=max(a,b);i<a*b;i++){
        if(i%a==0 &&i%b==0){
            lcm=i;
            break;
        }
    }
    cout<<lcm;
}