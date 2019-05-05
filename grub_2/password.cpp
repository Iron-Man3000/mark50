#include<iostream>
using namespace std;
class pass
{
 public:
   char a[6];
   int i, count=0;
   void getdata();
   void showdata();
   void password();
};

void pass::getdata()
{
  cout<<"Enter a string of six characters: "<<endl;
  for(i=0;i<6;i++)
  {
    cin>>a[i];
  }
}

void pass::showdata()
{
  cout<<"Your string of six characters is: ";
  for(i=0;i<6;i++)
  {
    cout<<a[i];
  }
  cout<<endl;
}

void pass::password()
{
  cout<<"Possible combinations for 4 digit passwords can be: "<<endl;
  for(i=0;i<6;i++)
  {
    for(int j=0;j<6;j++)
    {
      for(int k=0;k<6;k++)
      {
        for(int l=0;l<6;l++)
        {
          if(a[i]==a[j] || a[i]==a[k] || a[i]==a[l] || a[j]==a[k] || a[j]==a[l] || a[k]==a[l])
          {
            continue;
          }
          else
          {
            cout<<count<<"-"<<a[i]<<a[j]<<a[k]<<a[l]<<endl;
            count++;
          }
        }
      }
    }
  }
}

int main()
{
  pass p;
  p.getdata();
  p.showdata();
  p.password();
  return 0;
}
