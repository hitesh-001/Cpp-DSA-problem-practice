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
vector<int> preorder_BFS(Node *root){
    vector<int> ans;
    if(root==NULL){
        return ans; 
    }
    stack<Node*> s1;
    s1.push(root);
    while(!s1.empty()){
        Node *top=s1.top();
        ans.push_back(top->data);
        s1.pop();
        if(top->right){
            s1.push(top->right);
        }
        if(top->left){
            s1.push(top->left);
        }
    }
    return ans;
}


int main(){
    vector<int> res;
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    res=preorder_BFS(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}