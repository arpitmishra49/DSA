#include<iostream>
using namespace std;

class Queue{
public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    bool isFull(){
        return rear == size - 1;
    }

    bool isEmpty(){
        return front == -1;
    }

    void enqueue(int val){
        if(isFull()){
            cout << "Queue is full\n";
            return;
        }

        if(front == -1){   // first element
            front = 0;
        }

        rear++;
        arr[rear] = val;
        cout << "Enqueued: " << val << endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue is empty\n";
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;
        front++;

        // reset when empty
        if(front > rear){
            front = rear = -1;
        }
    }

    void display(){
        if(isEmpty()){
            cout << "Queue is empty\n";
            return;
        }

        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}