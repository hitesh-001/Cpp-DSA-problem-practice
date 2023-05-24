#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *left;
		Node *right;
	
	Node(int value){
		this->data=value;
		this->left=NULL;
		this->right=NULL;
	}	
};
void preorder(Node *node){
	if(node==NULL){
		return;
	}
	cout<<(node->data)<<" ";
	preorder(node->left);
	preorder(node->right);
}
void inorder(Node *node){
	if(node==NULL){
		return;
	}
	inorder(node->left);
	cout<<(node->data)<<" ";
	inorder(node->right);
}
void postorder(Node *node){
	if(node==NULL){
		return;
	}
	postorder(node->left);
	postorder(node->right);
	cout<<(node->data)<<" ";
}
int main(){
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	}
