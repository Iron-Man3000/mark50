/*ASSIGNMENT 8
  Cinema theatre reservation
  Roll no.- 2173100
  CLass CSE 3
  Name- Kartik Jawanjal
*/
#include<iostream>
using namespace std;
class node{
    public:
    string booked;
    int row_number;
    int seat_number;
    node *next,*prev;


};

class list{
    public:
    node *head;
    node *tail;
    int count;
    list(){
        tail=NULL;
        head=NULL;
    }
    public:
    node *blast();
    void createlist();
    void displayavailable();
    void cancel();
    void display();

};


node *list::blast(){
    node *newnode;
    newnode= new node;
    cout<<"enter if booked";
    cin>>newnode->booked;
    cout<<"enter the row number";
    cin>>newnode->row_number;
    cout<<"enter the column number";
    cin>>newnode->seat_number;
    newnode->next=NULL;
     return(newnode);



}



void list::createlist(){
    node *cur, *prev, *newnode;
	int pos, ch, cont=1;
	prev=NULL; 
	cur=head;
			cout<<"The row number starts from 1 to 7 and the seat number starts from 1 to 7";
		cout<<"Enter \n1.Insert at the start\n2. at the end\n3.in the middle\n";
		cin>>ch;
		
		switch(ch)		
		{
		case 1:newnode=blast();

			newnode->next=head;
			newnode->prev=NULL;
			head=newnode;
			break;

		case 2:newnode=blast();

			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
			break;

		case 3:newnode=blast();

			cout<<"\nEnter the Position where the node should b inserted";
			cin>>pos;
			cout<<"\n";
			while(pos!=cont)
			{
				prev=cur;
				cur=cur->next;
				cont++;
			}
			if(pos==cont)
			{
				prev->next=newnode;
				newnode->prev=prev;
				newnode->next=cur;
				cur->prev=newnode;
				
			}
			else{
			cout<<"\nInsertion not possible";
			break;}
		}
		
		
	
	
	
}

void list::cancel(){
	node *cur, *prev;
	int pos, ch, cont=1;
	prev=NULL; 
	cur=head;
	if(head==NULL)
	{
		cout<<"\nThe list is empty";
	}

	else
	{
		cout<<"\n1: To delete node at beginning\n2: To delete node at the end\n 3: To delete node in between\n";
		cin>>ch;
		switch(ch)		
		{
		case 1:
			cout<<"\n The element deleted is :"<<head->row_number<<head->seat_number;			
			head=head->next;
			break;

		case 2:
			while(cur!=tail)
			{
				prev=cur;
				cur=cur->next;
			}
			if(cur==tail)
			{
				cout<<"\n The deleted element is :"<<cur->row_number<<cur->seat_number;				
				prev->next=NULL;
				cur->prev=NULL;
				tail=prev;
			}
			else
			cout<<"\nElement not deleted";
			break;

		case 3:
			cout<<"\nEnter Position where the node is  to be inserted:";
			cin>>pos;
			cout<<"\n";
			while(pos!=cont)
			{
				prev=cur;
				cur=cur->next;
				cont++;
			}
			if(pos==cont)
			{
				cout<<"\n The element ddeleted is : "<< cur->row_number<<cur->seat_number;
				prev->next=cur->next;
				cur->prev=cur->next;
				
			}
			else
			cout<<"\nEnable to insert";
			break;
		}
		
		
	}
	
	

};

       


void list::display(){
    node *temp;
    temp=head;
    if(temp==NULL){
        cout<<"The list is empty";
    
    }
else{
    while(temp!=NULL){
        cout<<temp->row_number;
		cout<<temp->seat_number<<endl;
        temp=temp->next;
    }

}
}

int main(){

    list s;
    int x,y;
        do{
cout<<"1.createlist\n2.cancel\n3.Display\n";
cin>>x;
switch(x){
case 1: s.createlist();
	    break;
case 2: s.cancel();
		break;
case 3: s.display();

}

cout<<"Enter 0 to continue and  any other key to exit\n";
cin>>y;
}while(y==0);
    return 0;

}


/* OUTPUT
PS D:\Programs\CPP\2173100> g++ cinemalinkedlist2.cpp
PS D:\Programs\CPP\2173100> ./a.exe
1.createlist
2.cancel
3.Display
1
The row number starts from 1 to 7 and the seat number starts from 1 to 7Enter
1.Insert at the start
2. at the end
3.in the middle
1
enter if booked b
enter the row number 1
enter the column number 1
Enter 0 to continue and  any other key to exit
0
1.createlist
2.cancel
3.Display
3
11
Enter 0 to continue and  any other key to exit
0
1.createlist
2.cancel
3.Display
1
The row number starts from 1 to 7 and the seat number starts from 1 to 7Enter
1.Insert at the start
2. at the end
3.in the middle
1
enter if booked b
enter the row number 1
enter the column number 2
Enter 0 to continue and  any other key to exit
0
1.createlist
2.cancel
3.Display
2

1: To delete node at beginning
2: To delete node at the end
 3: To delete node in between
1

 The element deleted is :12Enter 0 to continue and  any other key to exit
*/