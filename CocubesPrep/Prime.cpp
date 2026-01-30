#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to be checked";
    cin>>n;
    bool flag=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"The number is not prime";

    }
    else{
        cout<<"The number is prime";

    }

}