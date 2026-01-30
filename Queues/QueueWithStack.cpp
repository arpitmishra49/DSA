#include <iostream>
using namespace std;
#include <stack>
class QueueByStack
{
private:
    stack<int> s1, s2;
    int front;

    QueueByStack() {

    };
    void push(int x)
    {
        if (s1.empty())
        {
            front = x;
        }
        s1.push(x);
    }

    int pop()
    {
        int ans = 0;
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        ans=s2.top();
        s2.pop();
        front=s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        
        return ans;
    }
    int peek(){
        return front;

    }
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
        
    }


};

int main()
{
    stack<int> s;
    stack<int> sTemp;
}