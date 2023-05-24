#include <iostream>
#include <stack>
using namespace std;
void bottomDown(stack<int> &s1,int key){
    stack<int> s2;
    while(!s1.empty()){
        int top = s1.top();
        s1.pop();
        s2.push(top);
    }
    s1.push(key);
    while(!s2.empty()){
        int top=s2.top();
        s2.pop();
        s1.push(top);
    }
}
int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    int ele=6;
    bottomDown(s1,ele);
    while(!s1.empty()){
        int top=s1.top();
        s1.pop();
        cout<<top<<" ";
    }
}