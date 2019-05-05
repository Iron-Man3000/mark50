#include<iostream>
using namespace std;

class stack1{
public:
	int stack[5],n=5,top=-1, size=-1;
	stack1(){
		for(top=0;top<n;top++)
		{
			stack[top]=0;
		}
		top=-1;
	}
	void push();
	void push2();
	void display();
	void pop();

};

void stack1::push()
{
	char opt=NULL;
	for(top=0;top<n;top++)
	{
		cout<<"Do you want to insert(y/n)"<<endl;
		cin>>opt;
		if(opt=='n')
		{
			break;
		}
		else if(opt=='y'){
			cout<<"Enter data"<<endl;
			cin>>stack[top];
		}
		else{
			cout<<"Invalid i/p"<<endl;
		}
	}
}

void stack1::display()
{
	if(top<=-1)
	{
		cout<<"Stack is empty"<<endl;

	}
	else
	{
	for(top=n-1;top>-1;top--)
	{
		cout<<top<<endl;
		cout<<"The data is"<<stack[top]<<endl;
	}

	top=n-1;
}

}

void stack1::pop()
{
	char opt;
	for(top=n-1; top>-1; top--){
		cout<<"Do you want to pop elemnt from the stack? (y/n): ";
		cin>>opt;
		if(opt=='n'){
			break;
		}
		else{
			cout<<"Data is: "<<stack[top]<<endl;
		}
	}
}

void stack1::push2(){
	char opt;
	int e=0;
	if(top>=n){
		cout<<"Stack overflow!"<<endl;
	}
	else{
		for(top=0; top<n; top++){
			cout<<"Do you want to push element onto the stack? (y/n) ";
			cin>>opt;
			if(opt=='n'){
				break;
			}
			else if(opt=='y'){
				cout<<"Enter elemnt: ";
				cin>>stack[top];
			}
			else{
				cout<<"Invalid input."<<endl;
			}
		}
	}
	cout<<"Stack full upto "<<top<<" places."<<endl;
	size=top;
}

int main()
{
	stack1 s;
	int t;
	do{
	cout<<"Enter choice:\n 1.push \n 2.pop \n 3.display \n 4.exit \n 5.Push2\n"<<endl;
	cin>>t;
		switch(t)
		{
			case 1:
			s.push();
			break;

			case 2:
			s.pop();
			break;

			case 3:
			s.display();
			break;

			case 4:
			break;

			case 5:
			s.push2();
			break;

			default:
			cout<<"Invalid"<<endl;
			break;
		}
	}while(t!=4);
	return 0;
}
