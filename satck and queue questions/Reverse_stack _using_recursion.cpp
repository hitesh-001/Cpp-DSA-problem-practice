#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &s1,int num){
    if(s1.empty()){
        s1.push(num);
        return;
    }
    int top = s1.top();
    s1.pop();
    insertAtBottom(s1,num);
    s1.push(top);
}
void reverseStack(stack<int> &s1){
    if(s1.empty()){
        return;
    }
    int num=s1.top();
    s1.pop();
    reverseStack(s1);
    insertAtBottom(s1,num);
}
int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    reverseStack(s1);
    while(!s1.empty()){
        int top=s1.top();
        s1.pop();
        cout<<top<<" ";
    }
}