#include<iostream>
using namespace std;

class Stack{
    private:
    int *arr;
    int size;
    int top;
    public:
    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }

    void push(int a){
        if(top==size){
            cout<<"The stack is full";
            return;
        }
        top=top+1;
        arr[top]=a;
        cout<<"Value pushed into the stack ";
    }

    void pop(){
        if(top==-1){
            cout<<"The stack is empty";
        }
        top=top-1;
    }

    void peek(){
        if(top==-1){
            cout<<"The stack is empty";
        }
        else{
            cout<<arr[top];
        }
    }

    
};
int main(){
    Stack s(10);
    s.push(1);
    s.push(12);
    s.pop();
    s.peek();
    

}




