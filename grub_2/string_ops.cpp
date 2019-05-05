#include<iostream>
#include<string>
using namespace std;
class strop
{
 public:
   char s[100], a[100], b[100], pal[100], c;
   int i, j, len, cnt=0, cnt2=0, p;
   void getdata();
   void showdata();
   void frequency();
   void intdelete();
   void chardelete();
   void palindrome();
};

void strop::getdata()
{
  cout<<"Enter your string: "<<endl;
  cin>>s;
  len=strlen(s);
  //cout<<"length="<<len;
}

void strop::showdata()
{
  cout<<"Your string is: "<<s<<endl;
}

void strop::frequency()
{
  cout<<"Enter a character you want to find the frequency of occurance in the string: ";
  cin>>c;
  for(i=0;i<len;i++)
  {
    if(s[i]==c)
    {
      cnt++;
    }
  }
  cout<<"Your character "<<c<<" occured "<<cnt<<" times in the string."<<endl;
}

void strop::intdelete()
{
  cout<<"Enter the location at which you want the character to be deleted: ";
  cin>>p;
  cout<<"New string is: "<<endl;
  for(i=0;i<len;i++)
  {
    if(i==p)
    {
      continue;
    }
    else
    {
      b[i]=s[i];
      cout<<b[i];
    }
  }
  cout<<endl;
}

void strop::chardelete()
{
  cout<<"Enter a character you want to delete in the string: ";
  cin>>c;
  cout<<"New string is: "<<endl;
  for(i=0;i<len;i++)
  {
    if(s[i]==c)
    {
      continue;
    }
    else
    {
      a[i]=s[i];
      cout<<a[i];
    }
  }
  cout<<endl;
}

void strop::palindrome()
{
  cout<<"The reverse of the given string is: ";
  for(i=0;i<len;i++)
  {
    pal[i]=s[(len-i)-1];
    if(pal[i]==s[i])
    {
      cnt2++;
    }
    cout<<pal[i];
  }
  cout<<endl;
  cout<<"Therefore, the given sting ";
  if(cnt2==len)
  {
    cout<<" is palindrome!"<<endl;
  }
  else
  {
    cout<<" is not a palindrome"<<endl;
  }
}

int main()
{
  strop obj;
  obj.getdata();
  obj.showdata();
  obj.frequency();
  obj.intdelete();
  obj.chardelete();
  obj.palindrome();
  return 0;
}
