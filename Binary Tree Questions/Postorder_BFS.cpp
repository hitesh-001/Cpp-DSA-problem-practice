#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void postOrder(Node *root){
    vector<int> ans;
    stack<Node*> s1;
    stack<Node*> s2;
    Node *top=root;
    s1.push(top);
    while(!s1.empty()){
        top=s1.top();
        s1.pop();
        s2.push(top);
        if(top->left){
            s1.push(top->left);
        }
        if(top->right){
            s1.push(top->right);
        }
    }
    while(!s2.empty()){
        cout<<s2.top()->data<<" ";
        s2.pop();
    }
}
int main(){
    // vector<int> res;
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    postOrder(root);
    return 0;
}