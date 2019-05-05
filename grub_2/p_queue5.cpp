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
	cout<<"Enter priority: ";
	cin>>newnode->priority;
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
				if(newnode->priority < front->priority){
					newnode->next = front;
					front = newnode;
				}
				else{
					temp=front;
					curr=front;
					int cnt1=0, cnt2=0;
					while(temp!=NULL && temp->priority <= newnode->priority){
						temp = temp->next;
						cnt1++;
					}
					while(cnt2!=(cnt1-1)){
						curr = curr->next;
						cnt2++;
					}
					curr->next=newnode;
					newnode->next=temp;
				}
			}
		}
	}
}

void queue1::dequeue(){
	char ch;
	while(1){
		cout<<"Do you want to remove a element from the the queue? (y/n): ";
		cin>>ch;
		if(ch=='n'){
			break;
		}
		else{
			if(front==NULL){
				cout<<"Queue is empty."<<endl;
				break;
			}
			else{
				cout<<"Data is: "<<front->data<<endl;
				cout<<"Priority is: "<<front->priority<<endl;
				cout<<endl;
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
