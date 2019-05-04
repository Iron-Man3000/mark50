#include<iostream>
using namespace std;

class stropt
{
public:
int i,j,k,l,y=0,c=0;
char a[10],x,b[10];
public:

void input();
void freq();
void pdelete();
void chardelete();
void palindrome();
};

void stropt::input()
{
cout<<"Enter a String : ";
for(i=0;i<10;i++)
{
cin>>a[i];
}
cout<<"Entered String :";
for(i=0;i<10;i++)
{
cout<<a[i];
}


}






void stropt::freq()
{
cout<<"Enter the char to calculate freq :";
cin>>x;

for(i=0;i<10;i++)
{
    if(x==a[i])
    {
        c=c+1;
    }
}
cout<<"Frequency :"<<c;
}

void stropt::palindrome()
{
    cout<<"b[i]=";
 for(i=0;i<=10;i++)
  {
      a[i]=b[i];
      cout<<b[i];
  }
}


int main()
{
    stropt o;
    o.input();
    o.freq();
    //o.palindrome();
    return (0);
}
