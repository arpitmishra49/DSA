#include<iostream>
using namespace std;
#include<stack>
void pushBottom(int x,stack<int>& s){
    if(s.empty()){
        s.push(x);
        return;
    }
   int a=s.top();
   s.pop();
   pushBottom(x,s);
   s.push(a);   
}
int main(){
    stack<int> stk;
    stk.push(10);
    stk.push(13);
    stk.push(14);
    stk.push(15);
    stk.push(16);
    pushBottom(90,stk);
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;



}