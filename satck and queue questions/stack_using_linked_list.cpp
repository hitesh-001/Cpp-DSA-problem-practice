#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    
};
class Stack{
    public:
    Node *head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    Node push(int data){
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack Underflowed"<<endl;
        }
        head=head->next;
        size--;
    }
    void peek(){
        cout<<head->data<<" ";
    }
    bool isEmpty(){
        cout<<(head==NULL)<<" ";
    }

};
int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.peek();
    s1.pop();
    s1.peek();
    s1.isEmpty();
    s1.pop();
    s1.pop();
    s1.pop();
}