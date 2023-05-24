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
vector<int> inorder_BFS(Node *root){
    vector<int> ans;
    Node* top=root;
    stack<Node*> s1;
    while(true){
        if(top!=NULL){
            s1.push(top);
            top=top->left;
        }
        else{
            if(s1.empty()==true){
                break;
            }
            top=s1.top();
            s1.pop();
            ans.push_back(top->data);
            top=top->right;
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
    res=inorder_BFS(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}