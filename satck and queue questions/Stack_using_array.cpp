#include <iostream>
using namespace std;
class Stack{
	int top=-1;
	public:
		int arr[1000];
	
	void push(int data){
		if(top>1000){
		cout<<"Stack Overflowed"<<endl;
	}
	else{
		top++;
		arr[top]=data;
		
		}
	}
	void pop(){
		int temp;
		if(top<0){
			cout<<"Underflowed"<<endl;
		}
		else{
			temp=arr[top];
			top--;
		}
	}	
	bool isEmpty(){
		if(top<0){
			return true;
		}
		else{
			return false;
		}
	}
	void peek(){
		if(top<0){
			cout<<"Underflowed"<<endl;
		}
		else{
			cout<<arr[top]<<endl;
		}
	}
};
int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.peek();

}
