#include<iostream>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int val;
    Node(int val){
        left=NULL;
        right=NULL;
        this->val=val;

    }
    void print(Node* root){
        if(!root){
            return;
        }
        cout<<root->val<<" ";
        print(root->left);
        print(root->right);
    }
    
};
int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->print(root);



}
