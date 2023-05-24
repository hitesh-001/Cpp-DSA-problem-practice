#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string str="Hitesh";
    stack<char> s1;
    for(int i=0;i<str.length();i++){
        s1.push(str[i]);
    }
    while(!s1.empty()){
        cout<<s1.top();
        s1.pop();
    }
}