#include<iostream>
#include<math.h>
using namespace std;
//Simply just check if perfect square or not if perfect square then Odd else Even!!
bool checkEvenOrOdd(int a){
    int val=sqrt(a);
    if(val*val==a){
        return true;

    }
    return false;

}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(checkEvenOrOdd(n)){
        cout<<"ODD";
    }
    else{
        cout<<"EVEN";
    }
    return 0;
    
}