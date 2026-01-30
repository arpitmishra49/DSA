#include<iostream>
using namespace std;
#include<stack>

class QueueByStack{
    private:
    stack<int> s1,s2;
    int front,bottomOfs1;

    QueueByStack(){

    }
    void push(int x){
        if(s1.empty() && s2.empty()){
            front=x;
        }
        else if(s1.empty()){
            bottomOfs1=x;
        }
        s1.push(x);
    }
    int pop(){
        int ans=0;
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        ans=s2.top();
        s2.pop();
        if(!s2.empty()){
            front=s2.top();

        }
        else if(!s1.empty()){
            front=bottomOfs1;

        }
        return ans;
    }
    int peek(){
        return front;
    }
    bool empty(){
        if(s1.empty() && s2.empty());

    }



};
