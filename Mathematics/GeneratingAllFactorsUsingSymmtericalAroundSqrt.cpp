#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value";
    cin>>a;
    
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            if(i*i==a){
                cout<<i<<endl;
            }
            else{
                cout<<i<<endl;
                cout<<a/i<<endl;
            }
        }
    }
    return 0;

}