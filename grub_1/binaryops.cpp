#include<iostream>
using namespace std;
class binopt{
    public:
    int stack[50];
    int stack2[50];
    int top,top2;
    int i,j,k,n;
    int x[10],y,carry;


    binopt(){
        top=-1;
        top2=-1;
    }

void getdata(){
    cout<<"Enter the number of digits of the binary number\n";
    cin>>n;
    cout<<" Enter the binary number :\n";
    for(i=0;i<n;i++){
        cin>>x[i];
    push(x[i]);}

    }



    void push(int x){
    if(top>=n-1){
        cout<<"\nStack has overflown";
         }
    else{

        top++;
        stack[top]=x;
        }
    }




void pop(){
    if(top<=-1){
        cout<<"\n\t Stack is empty";
    }
    else{
        cout<<stack[top];
        top--;
    }
}



void display(){
    if(top>=0){
        cout<<"\n The elements in STACK \n";
        for(i=top; i>=0; i--)
            cout<<"\n"<<stack[i];

    }
    else{
        cout<<"\n Stack is empty !!!";
    }

}
void onescomplement(){
for(i=0;i<n;i++){
    if(stack[i]==1){
        cout<<'0';
    }
    else
        if(stack[i]==0){
        cout<<'1';}

    }


}


void twoscomplement(){
    for(i=n;i>=0;i--){
        if(stack[top]==0){
            pop();
        }
        if(stack[top]==1){
            pop();
            for(i=n-1;i>=0;i--){
                if(stack[top]==0){
                    cout<<"1";
                    top--;

                }
                if(stack[top]==1){
                    cout<<"0";
                    top--;
                }
                }
        }




    }



}

void binaryadd(){
int a[4];
    int b[4];
    int carry=0;
    int result[5];
    int i;


   cout<<"Enter the first number\n";
    for ( i=0;i<4;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the second number\n";
    for ( i=0;i<4;i++){
        cin>>b[i];
    }


    for(int i=0; i<4; i++)
    {

        if(a[i]+b[i]+carry==3)
        {
        result[i]=1;
        carry=1;
        }
        if(a[i]+b[i]+carry==2)
        {
        result[i]=0;
        carry=1;
        }
        if(a[i]+b[i]+carry==1)
        {
        result[i]=1;
        carry=0;
        }
        if(a[i]+b[i]+carry==0)
        {
        result[i]=0;
        carry=0;
        }


    }
    result[4]=carry;
    for(int j=4; j>=0; j--)
    {
        cout<<result[j];

    }



}
};






int main(){

binopt s;
int x,y,z;

do{
        cout<<"Enter\n 1.Getdata\n2. 1's Complement\n3. 2's Complement\n4.Binary addition\n";
        cin>>y;
        switch(y){
        case 1:s.getdata();
            break;
        case 2:s.onescomplement();
            break;
        case 3:s.twoscomplement();
            break;
        case 4: s.binaryadd();
        }
        cout<<"Enter 1 to continue and any other key  to exit\n";
        cin>>x;
    }
    while(x==1);
    return 0;





}


/*
PS D:\Programs\cpp> g++ binaryops.cpp
PS D:\Programs\cpp> ./a.exe
Enter
 1.Getdata
2. 1's Complement
3. 2's Complement
4.Binary addition
1
enter the number of digits of the binary number
4
 Enter a value to be pushed:1
0
1
0
Enter 1 to continue and any other key  to exit
1
Enter
 1.Getdata
2. 1's Complement
3. 2's Complement
4.Binary addition
2
0101Enter 1 to continue and any other key  to exit
1
Enter
 1.Getdata
2. 1's Complement
3. 2's Complement
4.Binary addition
4
Enter the first number
1
1
1
1

Enter the second number
1
1
1
1
11110Enter 1 to continue and any other key  to exit

Note: 2's complement gives the result from right to left instead of vice versa due to stack implementation.

PS D:\Programs\CPP\2173100> g++ binaryops.cpp
PS D:\Programs\CPP\2173100> ./a.exe
Enter
 1.Getdata
2. 1's Complement
3. 2's Complement
4.Binary addition
1
enter the number of digits of the binary number
4
 Enter a value to be pushed:
1
1
1
1
Enter 1 to continue and any other key  to exit
1
Enter
 1.Getdata
2. 1's Complement
3. 2's Complement
4.Binary addition
3
10000Enter 1 to continue and any other key  to exit



*/
