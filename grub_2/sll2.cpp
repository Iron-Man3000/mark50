#include<iostream>
using namespace std;
class node
{
 public:
  int data;
  node *link;
};

class llist
{
 public:
   node *head, *tail;
   llist()
   {
     head=NULL;
     tail=NULL;
   }
   node *createnode();
   void createlist();
   void insert();
   void display();
   void delete1();
   void display2();
};

node *llist::createnode()
{
  node *newnode;
  newnode=new node;
  cout<<"Enter data: ";
  cin>>newnode->data;
  newnode->link=NULL;
  return (newnode);
}

void llist::createlist()
{
  node *newnode1;
  char ch;
  while(1)
  {
    cout<<"Enter y/n to create node: ";
    cin>>ch;
    if(ch!='y')
    {
      break;
    }
    else
    {
      newnode1=createnode();
      if(head==NULL)
      {
        head=newnode1;
        tail=newnode1;
      }
      else
      {
        tail->link=newnode1;
        tail=newnode1;
      }
    }
    cout<<"head= "<<head<<endl;
    cout<<"tail= "<<tail<<endl;
  }
}

void llist::insert()
{
  int ch, pos, cnt1=1, cnt2=1;
  node *newnode2, *tempnode, *curnode;
  newnode2=createnode();
  //tempnode=createnode();
  //curnode=createnode();
  newnode2->link=NULL;
  cout<<"Where to insert?\n1)At the begining\n2)In between\n3)At the end\nEnter your choice: ";
  cin>>ch;
  switch(ch)
  {
    case 1:newnode2->link=head;
           head=newnode2;
           tempnode=head;
           while (tempnode!=NULL)
           {
             cout<<tempnode->data<<endl;
             tempnode=tempnode->link;
           }
           break;
    case 2:cout<<"In between"<<endl;
           cout<<"Enter position to enter the node: ";
           cin>>pos;
           tempnode=head;
           curnode=head;
           while(cnt1!=pos)
           {
             tempnode=tempnode->link;
             cnt1++;
           }
           while(cnt2!=(pos-1))
           {
             curnode=curnode->link;
             cnt2++;
           }
           curnode->link=newnode2;
           newnode2->link=tempnode;
           tempnode=head;
           while(tempnode!=NULL)
           {
             cout<<tempnode->data<<endl;
             tempnode=tempnode->link;
           }
           /*while(cnt1!=pos)
           {
             tempnode=curnode;
             curnode=curnode->link;
             cnt1++;
           }*/
           /*while(tempnode->link!=NULL)
           {
             curnode=tempnode;
             curnode->link=curnode;
             if(cnt2==pos)
             {
                tempnode->link=newnode2;
                newnode2->link=curnode;
             }
             cout<<tempnode->data<<endl;
             tempnode=tempnode->link;
             cnt2++;
           }*/

           //cout<<tempnode->data<<endl;
           //tempnode=tempnode->link;
           break;
    case 3:tail->link=newnode2;
           tail=newnode2;
           tempnode=head;
           while (tempnode!=NULL)
           {
             cout<<tempnode->data<<endl;
             tempnode=tempnode->link;
           }
           break;
  }
}

void llist::display()
{
  node *newnode3;
  newnode3=head;
  cout<<"newnode3= "<<newnode3<<endl;
  cout<<"head= "<<head<<endl;
  cout<<"tail= "<<tail<<endl;
  if(newnode3==NULL)
  {
    cout<<"List is empty"<<endl;
  }
  else
  {
    while((newnode3)!=(NULL))
    {
      cout<<newnode3->data<<endl;
      newnode3 = newnode3->link;
    }
    cout<<"head= "<<head<<endl;
    cout<<"tail= "<<tail<<endl;
  }
}

void llist::display2()
{
  node *newnode3;
  newnode3=head;
  cout<<"newnode3= "<<newnode3<<endl;
  cout<<"head= "<<head<<endl;
  cout<<"tail= "<<tail<<endl;
  cout<<"newnode3->link= "<<newnode3->link<<endl;
  cout<<"tail->link= "<<tail->link<<endl;
  cout<<"head->link= "<<head->link<<endl;
  if(newnode3==NULL)
  {
    cout<<"List is empty"<<endl;
  }
  else
  {
    while((newnode3)!=(NULL))
    {
      newnode3->link=head;
      cout<<newnode3->data<<endl;
      newnode3 = newnode3->link;
    }
  }
}

void llist::delete1(){
  int pos, cnt1=1, cnt2=1;
  node *temp, *curr;
  temp=head;
  curr=head;
  cout<<"Enter position to delete a node: ";
  cin>>pos;
  while(cnt1!=pos){
    temp=temp->link;
    cnt1++;
  }
  while(cnt2!=(pos-1)){
    curr=curr->link;
    cnt2++;
  }
  curr->link=temp->link;
  delete temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->link;
  }
}

int main()
{
  llist l;
  l.createlist();
  //l.insert();
  l.display();
  l.insert();
  l.delete1();

  return 0;
}
