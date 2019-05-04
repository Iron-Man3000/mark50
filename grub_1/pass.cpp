#include<iostream>
using namespace std;

class password
{
public:
int i,j,k,l,x=0,y=0,c=0;
char a[6]={'1','3','a','s','t','i'};
public:

void pass()
{
cout<<"4 digit password are :"<<endl;
for(i=0;i<6;i++)
    for(j=0;j<6;j++)
        for(k=0;k<6;k++)
            for(l=0;l<6;l++)
            {
            x=x+1;
            cout<<x<<".";
            cout<<a[i]<<a[j]<<a[k]<<a[l]<<"           ";
            c=c+1;
            if(c==5)
            {
                cout<<endl;
                c=0;
            }
            }
}
};

int main()
{
int y;
password o;
o.pass();
return 0;
}

