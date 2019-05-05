#include <iostream>
using namespace std;
class node{
public:
  int data;
  node *next, *prev;
};

class list{
public:
  node *head, *tail;
  int len=0, tlen=0;
  list(){
    head=NULL;
    tail=NULL;
  }
  node *createnode();
  void createlist();
  void display();
  void insert();
};

node *list::createnode(){
  node *newnode;
  newnode= new node;
  cout<<"Enter data: ";
  cin>>newnode->data;
  newnode->prev=NULL;
  newnode->next=NULL;
  return (newnode);
}

void list::createlist(){
  node *newnode, *tempnode;
  tempnode=head;
  char ch;
  while(1){
    cout<<"Press y/n: ";
    cin>>ch;
    if (ch=='n'){
      break;
    }
    else{
      newnode=createnode();
      if (head==NULL){
        head=newnode;
        tail=newnode;
        //head->prev=tail;
        cout<<endl;
        cout<<"Head: "<<head<<endl;
        cout<<"Tail: "<<tail<<endl;
        cout<<"Prev: "<<newnode->prev<<endl;
        cout<<"Next: "<<newnode->next<<endl;
        len++;
      }
      else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        //tail->next=head;
        cout<<endl;
        cout<<"Head: "<<head<<endl;
        cout<<"Tail: "<<tail<<endl;
        cout<<"Prev: "<<newnode->prev<<endl;
        cout<<"Next: "<<newnode->next<<endl;
        len++;
      }
    }
  }
  tlen=len;
}

void list::display(){
  node *tempnode;
  tempnode=head;
  tlen=len;
  if (tempnode==NULL){
    cout<<"list is empty"<<endl;
  }
  else{
    //cout<<"Head: "<<head<<endl;
    //cout<<"Tail: "<<tail<<endl;
    while (tlen!=0){
      cout<<endl;
      cout<<"Data: "<<tempnode->data<<endl;
      cout<<"Head: "<<head<<endl;
      cout<<"Tail: "<<tail<<endl;
      cout<<"Prev: "<<tempnode->prev<<endl;
      cout<<"Next: "<<tempnode->next<<endl;
      tempnode=tempnode->next;
      tlen--;
    }
  }
}

void list::insert(){
  node *newnode, *tempnode, *currnode;
  cout<<"Create your node: "<<endl;
  newnode=createnode();
  int pos=0, pos1=0, pos2=0, pos3=0, choice, cnt=0;
  //do{
    cout<<"Where do you want to insert the node:\n 1) Head \n 2) In between \n 3) Tail \n 4)Exit \n Enter your choice: ";
    cin>>choice;
    switch(choice){
      case 1: if(tempnode==NULL){
                      break;
              }
              else{
                      tempnode=head;
                      newnode->next=head;
                      newnode->prev=tail;
                      head->prev=newnode;
                      head=newnode;
                      len++;
                      break;
              }
      case 2: cout<<"Enter the position where you want to enter the node: ";
              cin>>pos;
              pos=pos-1;
              pos1=pos+1;
              tempnode=head;
              currnode=head;
              if (tempnode==NULL || currnode==NULL){
                cout<<"list is empty."<<endl;
              }
              else{
                while(pos!=0){
                  tempnode=tempnode->next;
                  pos--;
                }
                while(pos1!=0){
                  currnode=currnode->next;
                  pos1--;
                }
              }
              tempnode->next=newnode;
              newnode->prev=tempnode;
              newnode->next=currnode;
              currnode->prev=newnode;
              /*while(pos!=0){
                if (tempnode==NULL){
                  cout<<"list is empty."<<endl;
                }
                else{
                  tempnode=tempnode->next;
                }
                pos--;
              }
              while((pos1+1)!=0){
                if (currnode==NULL){
                  cout<<"List is empty."<<endl;
                }
                else{
                  currnode=currnode->next;
                }
                pos1--;
              }
              tempnode->next=newnode;
              newnode->prev=tempnode;
              newnode->next=currnode;
              currnode->=newnode;*/

              /*tlen=len;
              while(tlen!=0){
                currnode=tempnode;
                currnode->next=currnode;
                if(cnt==pos){
                  tempnode->next=newnode;
                  newnode->next=currnode;
                  newnode->prev=tempnode;
                  currnode->prev=newnode;
                }
                tempnode=tempnode->next;
                tlen--;
                cnt++;
              }*/
              len++;
              break;
      case 3: tempnode=head;
              tail->next=newnode;
              newnode->prev=tail;
              tail=newnode;
              tail->next=head;
              len++;
              break;
      case 4: break;
      default:cout<<"Invalid input. Try again."<<endl;
              break;
    }
  //}
  //while(pos!=4);
  cout<<endl;
}

int main(){
  list l;
  int opt;
  do{
    cout<<" 1. Create list \n 2. Display \n 3) Insert node \n 4). Exit \n Enter your choice: ";
    cin>>opt;
    switch(opt){
      case 1: l.createlist();
              break;
      case 2: l.display();
              break;
      case 3: l.insert();
              break;
      case 4: cout<<"Thank you!"<<endl;
              break;
      default:cout<<"Invalid input. Try again."<<endl;
              break;
    }
  }
  while(opt!=4);
  cout<<endl;
  return 0;
}
