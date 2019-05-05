#include<iostream>
using namespace std;
class poly
{
 public:
  int a[10], b[10], sum[10], sub[10], mul[20], l1, l2, i, j;
  poly()
  {
    for(i=0;i<10;i++)
    {
      a[i]=0;
      b[i]=0;
    }
    for(i=0;i<20;i++)
    {
      mul[i]=0;
    }
  }
  void getdata();
  void showdata();
  void add();
  void subt();
  void multi();
};

void poly::getdata()
{
  cout<<"How long is your first polynomial?\nEnter the number of all coefficients: "<<endl;
  cin>>l1;
  cout<<"Enter the coefficients from lowest power to highest power: "<<endl;
  for(i=0;i<l1;i++)
  {
    cin>>a[i];
  }
  cout<<endl;
  cout<<"How long is your second polynomial?\nEnter the number of all coefficients: "<<endl;
  cin>>l2;
  cout<<"Enter the coefficients from lowest power to highest power: "<<endl;
  for(i=0;i<l2;i++)
  {
    cin>>b[i];
  }
}

void poly::showdata()
{
  cout<<"First polynomial is: "<<endl;
  for(i=0;i<l1;i++)
  {
    cout<<a[i]<<"x^"<<i<<"\t";
  }
  cout<<endl;
  cout<<"Second polynomial is: "<<endl;
  for(i=0;i<l2;i++)
  {
    cout<<b[i]<<"x^"<<i<<"\t";
  }
  cout<<endl;
}

void poly::add()
{
  cout<<"Addition is = "<<endl;
  if(l1>=l2)
  {
    for(i=0;i<l1;i++)
    {
      sum[i]=a[i]+b[i];
      cout<<sum[i]<<"x^"<<i<<"\t";
    }
    cout<<endl;
  }
  else
  {
    for(i=0;i<l2;i++)
    {
      sum[i]=a[i]+b[i];
      cout<<sum[i]<<"x^"<<i<<"\t";
    }
    cout<<endl;
  }
}

void poly::subt()
{
  cout<<"Subtraction is = "<<endl;
  if(l1>=l2)
  {
    for(i=0;i<l1;i++)
    {
      sub[i]=a[i]-b[i];
      cout<<sub[i]<<"x^"<<i<<"\t";
    }
    cout<<endl;
  }
  else
  {
    for(i=0;i<l2;i++)
    {
      sub[i]=a[i]-b[i];
      cout<<sub[i]<<"x^"<<i<<"\t";
    }
    cout<<endl;
  }
}

void poly::multi()
{
  cout<<"multiplication is = "<<endl;
  for(i=0;i<l1;i++)
  {
    for(j=0;j<l2;j++)
    {
      mul[i+j]=(mul[i+j]+(a[i]*b[j]));
      //mul[i,j]=(mul[i,j]+(a[i]*b[j]));
      //mul[i]=(mul[i]+(a[i]*b[j]));
    }
  }
  for(i=0;i<(l1+l2-1);i++)
  {
    cout<<mul[i]<<"x^"<<i<<"\t";
  }
  cout<<endl;
}

int main()
{
  poly p;
  p.getdata();
  p.showdata();
  p.add();
  p.subt();
  p.multi();
  return 0;
}
