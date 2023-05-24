#include <iostream>
using namespace std;
class queue{
    public:
    int arr[1000];
    int front;
    int back;
    queue(){
        front=-1;
        back=-1;
    }
    void enqueue(int data){
        if(front==-1 && back==-1){
            front++;
            back++;
        }
        arr[back]=data;
        back++;
    }
    void dequeue(){
        if(front>back){
            cout<<"queue Underflowed"<<" ";
        }
        else{
            front++;
        }
    }
    void peek(){
        cout<<arr[front]<<" ";
    }
    void empty(){
        if(front>back){
            cout<<"true";
        }
        else{
            cout<<false<<" ";
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