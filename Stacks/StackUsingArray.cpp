#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        top=-1;
        arr = new int[size];

    }
    bool isEmpty(){
        if(top==-1){
            return true;

        }
        return false;
    }
    bool isFull(){
        if(top==size-1){
            return true;
        }
        return false;

    }
    void push(int val){
        if(isFull()){
            cout<<"The stack is full";
        }
        top=top+1;
        arr[top]=val;
        
    }
    void peek(){
        if(!isEmpty()){
            cout<<arr[top];
        }
        else{
            cout<<"The stack is empty";
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"The stack is already empty";
        }
        top--;
    }

};
int main(){
    Stack s(10);
    s.push(91);
    s.pop();
    s.pop();

}

