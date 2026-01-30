#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of the term to be found";
    cin>>n;
    int prev=0;
    int current=1;
    while(n>0){
    int next=prev+current;
    cout<<prev<<" ";
    prev=current;
    current=next;
    n=n-1;
    }

}