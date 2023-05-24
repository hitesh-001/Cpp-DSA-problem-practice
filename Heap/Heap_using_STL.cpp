#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);   
    pq.push(50);
    pq.push(70);
    pq.push(21); 
    pq.push(235);
    pq.push(28);
    while(!pq.empty()){
        int top=pq.top();
        pq.pop();
        cout<<top<<" ";
    }
}