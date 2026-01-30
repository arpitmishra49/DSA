#include<iostream>
using namespace std;

class Node{
    public: int val;
    public: Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
     ~Node(){
        int value=this->val;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;

    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void insertAtHead(Node* &head,int value){
    Node* newNode=new Node(value);
    head->next=newNode->next;
    head=newNode;
}

void insertAtEnd(Node* &tail,int value){
    Node* newNode=new Node(value);
    tail->next=newNode;
    tail=newNode;
    
}
void insertAtAnyPosition(Node* &head,Node* &tail,int value,int pos){
    if(pos==1){
        insertAtHead(head,value);
        return;
    }
    Node* temp=head;
    int cntPos=1;
    while(cntPos<pos){
        temp=temp->next;
        cntPos++;
    }
    if(temp->next==NULL){
        insertAtEnd(tail,value);
        return;
    }
    Node* newNode=new Node(value);
    temp->next=newNode->next;
    temp->next=newNode;

}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertAtEnd(tail,20);
    insertAtEnd(tail,30);
    insertAtAnyPosition(head,tail,40,2);
    print(head);
    

}

