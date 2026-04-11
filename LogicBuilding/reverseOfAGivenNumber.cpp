#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }
    cout<<"Reversed number: "<<reverse<<endl;
    return 0;
    
}