#include<iostream>
#include<string.h>
using namespace std;

class str
{
public:
  void stropt()
  {
    string a,cut,rem;
    char b,bu,bl;
    int i,j,c,fre,up,lo,uo,c1,flag,m;
    c = 0;
    fre = 0;
    cout<<"Enter your string :"<<"\n";
    getline(cin,a);
    for(i=0;a[i]!='NULL';i++)
    {
      c++;
    }
    cout<<"Enter charachter to get frequency : "<<"\n";
    cin>>b;
    for(i=0;i<c;i++)
    {
      if(b==a[i])
      {
        fre++;
      }
    }
    cout<<"Frequency of "<<b<<" is : "<<fre<<"\n";
    cout<<"Enter starting Position then end position to delete elements :"<<"\n";
    cin>>up;
    cin>>lo;

    for(i=0;a[i]!='NULL';i++)
    {
      if(i<=up||i>=lo)
      {
        cut += a[i];
      }
    }
    cout<<cut<<"\n";


    cout<<"Enter Character to be removed :"<<"\n";
    cin>>b;

    for(i=0;a[i]!='NULL';i++)
    {
      if(b!=a[i])
      {
        rem += a[i];n
      }
    }
    cout<<rem<<"\n";



    m = c / 2;
    for (i = 0; i < m; i++)
    {
      if (tolower(a[i]) != tolower(a[c-1]))
      {
         cout<<"String is not a palindrome.\n";
         break;
      }
      c--;
   }
   if (i == m)
      cout<<"String is a Palindrome.\n";
  }
};

int main()
{
  str o;
  o.stropt();
  return 0;
}


