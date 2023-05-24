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
class queue{
    public:
    Node *front;
    Node *back;
    queue(){
        this->front=NULL;
        this->back=NULL;
    }
    Node enqueue(int data){
        if(front==NULL && back==NULL){
            Node *temp=new Node(data);
            front=temp;
            back=temp;
        }
        else{
            Node *temp=new Node(data);
            back->next=temp;
            back=temp;
        }
    }
    void dequeue(){
        if(front==NULL){
            cout<<"queue Underflowed"<<endl;
        }
        else{
            front=front->next;
        }
    }
    void peek(){
        cout<<front->data<<" ";
    }
    void empty(){
        if(front==NULL){
            cout<<"true"<<" ";
        }
        else{
            cout<<"false"<<" ";
        }
    }

};
int main(){
    queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.peek();
    q1.dequeue();
    q1.peek();

}