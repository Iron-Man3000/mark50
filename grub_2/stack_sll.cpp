#include<iostream>
using namespace std;
class node{
public:
	int data;
	node *next;
};

class stack1{
public:
	node *top;
	stack1(){
		top = NULL;
	}
	node *createnode();
	void push();
	void pop();
	void display();
};

node *stack1::createnode(){
	node *newnode = new node;
	cout<<"Enter data: ";
	cin>>newnode->data;
	newnode->next=NULL;
	return (newnode);
}

void stack1::push(){
	node *newnode;
	char ch;
	while(1){
		cout<<"Do you want to push element on to the stack? (y/n): ";
		cin>>ch;
		if(ch=='n'){
			break;
		}
		else{
			newnode=createnode();
			if(top==NULL){
				top=newnode;
			}
			else{
				newnode->next=top;
				top=newnode;
			}
		}
	}
}

void stack1::pop(){
	char ch;
	while(1){
		if(top==NULL){
			cout<<"Stack Underflow."<<endl;
			break;
		}
		cout<<"Do you want to pop an element from the stack? (y/n): ";
		cin>>ch;
		if(ch=='n'){
			break;
		}
		else{
			cout<<"Data is: "<<top->data<<endl;
			top=top->next;
		}
	}
}

int main(){
	stack1 s;
	s.push();
	s.pop();
	return 0;
}
