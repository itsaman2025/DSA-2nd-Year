#include <iostream>
using namespace std;

//complete the functions
class Queue{
	int A[100000];
	int start;
	int end;
	
	public:
	 
	Queue(){
		cout<<"constructor is Called\n";
		start=0;
		end=0;
	}
	
	 
	void push(int val){
    A[end]=val;
		end++;
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}
	
	int front(){
    return A[start];
		cout<<"returning the value at front\n";
		return 0;
	}
	
	void pop(){
    start++;
		cout<<"removing the first element\n";
	}
	
	int size(){
    return end-start;
		cout<<"return the size of the queue\n";
		return 0;
	}
	
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		return true;
	}
};

int main() {
	Queue q;  
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
