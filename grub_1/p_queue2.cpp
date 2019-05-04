#include<iostream>
using namespace std;
class node{
public:
	int data;
	int priority;
	node *next;
};

class queue1{
public:
	node *front, *rear;
	queue1(){
		front = rear = NULL;
	}
	node *createnode();
	void enqueue();
	void dequeue();
};

node *queue1::createnode(){
	node *newnode = new node;
	cout<<"Enter data: ";
	cin>>newnode->data;
	newnode->next=NULL;
	return (newnode);
}

void queue1::enqueue(){
	node *newnode, *temp, *curr;
	temp=curr=front;
	char ch;
	while(1){
		cout<<"Do you want to add an element to the queue? (y/n): ";
		cin>>ch;
		if(ch=='n'){
			break;
		}
		else{
			newnode=createnode();
			if(rear == NULL){
				rear = newnode;
				front = newnode;
			}
			else{
				cout<<"Hello"<<endl;
			}
		}
	}
}

int main(){
	queue1 q;
	q.enqueue();
	return 0;
}
