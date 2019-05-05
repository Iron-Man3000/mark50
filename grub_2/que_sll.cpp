#include<iostream>
using namespace std;
class node{
public:
	int data;
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
	node *newnode;
	char ch;
	while(1){
		cout<<"Do you want to enqueue an element into the queue? (y/n): ";
		cin>>ch;
		if(ch=='n'){
			break;
		}
		else{
			newnode=createnode();
			if(rear==NULL){
				rear = newnode;
				front = newnode;
			}
			else{
				rear->next=newnode;
				rear = newnode;
			}
		}
	}
}

void queue1::dequeue(){
	char ch;
	while(1){
		if(front==NULL){
			cout<<"Queue is empty"<<endl;
			break;
		}
		else{
			cout<<"Do you want to dequeue an element from the queue? (y/n): ";
			cin>>ch;
			if(ch=='n'){
				break;
			}
			else{
				cout<<"Data is: "<<front->data<<endl;
				front=front->next;
			}
		}
	}
}

int main(){
	queue1 q;
	q.enqueue();
	q.dequeue();
	return 0;
}
