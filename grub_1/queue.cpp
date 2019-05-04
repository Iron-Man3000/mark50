
#include<iostream>
using namespace std;
class queue{
    public:
    string a[10];
    char y;
    int rear;
    int front;
    int limit;
    string x;

    queue(){

        front=-1;
        rear=-1;

    }

    void getdata(){
        cout<<"Enter the limit till where you want the vegetables and fruits in the list\n";
        cin>>limit;

    }


    void enqueue(){
        int i;
            while(i<limit){
                cout<<"Enter the vegetable and fruit combination\n";
            cin>>x;
        if(front==-1){
            front++;

        }



        if(rear==limit-1){
            cout<<"Queue is full\n";
        }




        else{
            a[++rear]=x;

        }
        i++;
    }


    }

    string dequeue(){
        return a[++front];


    }

    void display(){
        int i;
        for(i=front;i<=rear;i++){
            cout<<a[i]<<"\n";

        }

    }

};





int main(){
    queue s;


    int b,c;


    do{
        cout<<"Enter\n 1.Getdata\n2.Enqueue\n3.dequeue\n4.display\n";
        cin>>b;
        switch(b){
                case 1: s.getdata();
                    break;
                case 2: s.enqueue();
                    break;
                case 3: s.dequeue();
                    break;
                case 4: s.display();


        }
            cout<<"Enter 1 to continue and any other key to exit\n";
            cin>>c;
                }while(c==1);








    return 0;
}



/*OUTPUT

 1.Getdata
2.Enqueue
3.dequeue
4.display
1
Enter the limit till where you want the vegetables and fruits in the list
5
Enter 1 to continue and any other key to exit
1
Enter
 1.Getdata
2.Enqueue
3.dequeue
4.display
2
Enter the vegetable and fruit combination
CABBAGEANDAPPLE
Enter the vegetable and fruit combination
OKRAandKIWI
Enter the vegetable and fruit combination
CAULIFLOWERandMANGO
Enter the vegetable and fruit combination
FENUGREEKandKIWI
Enter the vegetable and fruit combination
SPINACHandGUAVA
Enter 1 to continue and any other key to exit
1
Enter
 1.Getdata
2.Enqueue
3.dequeue
4.display
3
Enter 1 to continue and any other key to exit
1
Enter
 1.Getdata
2.Enqueue
3.dequeue
4.display
4
OKRAandKIWI
CAULIFLOWERandMANGO
FENUGREEKandKIWI
SPINACHandGUAVA
Enter 1 to continue and any other key to exit
*/
