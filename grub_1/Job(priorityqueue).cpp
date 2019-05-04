
#include <iostream>
using namespace std;

class node{
    public:
	int priority;
	string jobs;
     node *link;
};

class Priority_Queue{
    public:
    node *front;
        Priority_Queue()
        {
            front=NULL;
        }

        void insert(string jobs, int priority)
        {
            node *newnode, *q;
            newnode=new node;
            newnode->jobs=jobs;
            newnode->priority=priority;
            if (front==NULL||priority<front->priority)
            {
                newnode->link=front;
                front=newnode;
            }
            else
            {
                q=front;
                while (q->link!=NULL&&q->link->priority<=priority)
                    q=q->link;
                newnode->link = q->link;
                q->link=newnode;
            }
        }


        void del(){
            node *newnode;
            if(front==NULL)
                cout<<"Queue has got some space left\n";
            else
            {
                newnode=front;
                cout<<"The object deleted is: "<<newnode->jobs<<endl;
                front=front->link;

            }
        }
        void display(){
            node *ptr;
            ptr=front;
            if (front==NULL)
                cout<<"The Queue is empty\n";
            else
            {	cout<<"Queue is :\n";
                cout<<"Priority       Job\n";
                while(ptr != NULL)
                {
                    cout<<ptr->priority<<"                 "<<ptr->jobs<<endl;
                    ptr = ptr->link;
                }
            }
        }
};

int main()
{
    int y, priority,x;
    string job;
    Priority_Queue s;
    do{
        cout<<"Enter\n 1.Insert element\n2.Delete\n3.display\n";
        cin>>y;
        switch(y){
        case 1:
            cout<<"Input the job value to be added in the queue\n";
            cin>>job;
            cout<<"Enter its priority\n";
            cin>>priority;
            s.insert(job, priority);
            break;
        case 2:
            s.del();
            break;
        case 3:
            s.display();
        }
        cout<<"Enter 1 to continue and any other key  to exit";
        cin>>x;
    }
    while(x==1);
    return 0;
}

/*
OUTPUT :
Enter
 1.Insert element
2.Delete
3.display
1
Input the job value to be added in the queue
Homework
Enter its priority
5
Enter 1 to continue and any other key  to exit1
Enter
 1.Insert element
2.Delete
3.display
1
Input the job value to be added in the queue
Football
Enter its priority
3
Enter 1 to continue and any other key  to exit1
Enter
 1.Insert element
2.Delete
3.display
1
Input the job value to be added in the queue
assignment
Enter its priority
7
Enter 1 to continue and any other key  to exit1
Enter
 1.Insert element
2.Delete
3.display
2
The object deleted is: Football
Enter 1 to continue and any other key  to exit1
Enter
 1.Insert element
2.Delete
3.display
3
Queue is :
Priority       Job
5                 Homework
7                 assignment
Enter 1 to continue and any other key  to exit

*/
