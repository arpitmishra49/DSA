#include<iostream>
using namespace std;
#include<stack>
void pushBottom(int val ,stack<int> &s){
    if(s.empty()){
        s.push(val);
        return;
    }
    int x=s.top();
    s.pop();
    pushBottom(val,s);
    s.push(x);
}
void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int y=s.top();
    s.pop();
    reverseStack(s);
    pushBottom(y,s);
}
int main(){
    stack<int> s;
    for(int i=0;i<10;i++){
        s.push(i);

    }
    
}