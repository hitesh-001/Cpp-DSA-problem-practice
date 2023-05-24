#include <iostream>
#include <vector>
#include <queue>
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
vector<int> levelOrder(Node *root){
    vector<int> ans;
    queue<Node*> q1;
    q1.push(root);
    while(!q1.empty()){
        Node *front=q1.front();
        ans.push_back(front->data);
        q1.pop();
        if(front->left){
            q1.push(front->left);
        }
        if(front->right){
            q1.push(front->right);
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
    res=levelOrder(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    

}