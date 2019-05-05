#include<iostream>
using namespace std;

class queue{
public:
		int queue1[5],n=5,front=-1,rear=-1;
		queue()
		{
			for(rear=0;rear<0;rear++)
			{
				queue1[rear]=0;
			}
		  rear=-1;
		}
		void enqueue();
		void display();
		void dequeue();
};

void queue::enqueue()
{
	char ch;
	if(rear>=n)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		for(rear=0;rear<n;rear++)
		{
		cout<<"Do you want to insert(y/n)"<<endl;
		cin>>ch;
		if(ch=='n')
		{
			break;
		}
		else if(ch=='y')
		{
			cout<<"Insert data"<<endl;
			cin>>queue1[rear];

		}
		}
	}
}

void queue::display()
{
	if(rear<=-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else{
		for(front=0;front<rear;front++){
		cout<<"The data is"<<queue1[front]<<endl;
		}
	}
	front++;
}

void queue::dequeue(){
	char opt;
	for(front=0; front<n; front++){
		cout<<"Do you want to dequeue an elemnt from the queue? (y/n): ";
		cin>>opt;
		if(opt=='n'){
			break;
		}
		else{
			cout<<"Data is: "<<queue1[front]<<endl;
		}
	}
}

int main()
{
	queue q;
	int t;
	do{
		cout<<"Enter choice \n1.Enqueue \n2.Display \n3.Dequeue \n4.Exit\n"<<endl;
		cin>>t;
		switch(t)
		{
			case 1:
			q.enqueue();
			break;

			case 2:
			q.display();
			break;

			case 3:
			q.dequeue();
			break;

			case 4:
			break;

			default:
			cout<<"Invalid"<<endl;
			break;
		}
	}while(t!=4);
	return 0;
}
