#include<iostream>
using namespace std;
void print(int x,int n){
    if(x>n){
        return ;

    }
    cout<<x<<" ";
    print(x+1,n);
}
int main(){
    print(1,6);
    return 0;

}