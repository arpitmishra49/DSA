#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no";
    cin>>n;
    int fact=1;
    for(int i=1;i<n+1;i++){
        fact=fact*i;
    }
    cout<<fact;

}