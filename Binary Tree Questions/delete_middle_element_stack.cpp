#include <iostream>
#include <stack>
using namespace std;
void deleteMiddle(stack<int> &s1,int count,int size){
    if(count==size/2){
        s1.pop();
        return;
    }
    int top=s1.top();
    s1.pop();
    deleteMiddle(s1,count+1,size);
    s1.push(top);
}
int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    int count=0;
    int n=s1.size();
    deleteMiddle(s1,count,n);
    while(!s1.empty()){
        cout<<s1.top();
        s1.pop();
    }
    
}