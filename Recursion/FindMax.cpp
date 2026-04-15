#include<iostream>
using namespace std;
int a[10]={12,34,45,222,3111,45,1234,234512,345,356};
int findMax(int i,int j){
    if(i==j){
        return a[i];
    }
    int m=(i+j)/2;
    int x=findMax(i,m);
    int y=findMax(m+1,j);
    return max(x,y);
}

int main(){
    cout<<findMax(0,10);
}