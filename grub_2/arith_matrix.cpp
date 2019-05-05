#include<iostream>
using namespace std;

class arithmatrix
{
 public:
   int a[10][10], b[10][10], sum[10][10], sub[10][10], multi[10][10] , i, j, k, r1, r2, c1, c2;
   void getdata();
   void showdata();
   void add_matrix();
   void sub_matrix();
   void multi_matrix();
};

void arithmatrix::getdata()
{
  cout<<"\nEnter number of rows for the first matrix: ";
  cin>>r1;
  cout<<"Enter number of columns for the first matrix: ";
  cin>>c1;
  cout<<"\nEnter elements of the first matrix: "<<endl;
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"\nEnter number of rows for the second matrix: ";
  cin>>r2;
  cout<<"Enter number of columns for the second matrix: ";
  cin>>c2;
  cout<<"\nEnter elements of the second matrix: "<<endl;
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      cin>>b[i][j];
    }
  }
}

void arithmatrix::showdata()
{
  cout<<"\nFirst matrix is: "<<endl;
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      cout<<a[i][j]<<"\t";
    }
    cout<<endl;
  }

  cout<<"\nSecond matrix is: "<<endl;
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      cout<<b[i][j]<<"\t";
    }
    cout<<endl;
  }
}

void arithmatrix::add_matrix()
{
  if(r1==r2 && c1==c2)
  {
    for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
      {
        sum[i][j]=a[i][j]+b[i][j];
      }
    }
    cout<<"\nAddition of the two matrices is: "<<endl;
    {
      for(i=0;i<r2;i++)
      {
        for(j=0;j<c2;j++)
        {
          cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
      }
    }
  }
  else
  {
    cout<<"\nOrder of the matrices are not even, hence addition cannot be performed."<<endl;
  }
}

void arithmatrix::sub_matrix()
{
  if(r1==r2 && c1==c2)
  {
    for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
      {
        sub[i][j]=a[i][j]-b[i][j];
      }
    }
    cout<<"\nSubtraction of the two matrices is: "<<endl;
    {
      for(i=0;i<r2;i++)
      {
        for(j=0;j<c2;j++)
        {
          cout<<sub[i][j]<<"\t";
        }
        cout<<endl;
      }
    }
  }
  else
  {
    cout<<"\nOrder of the matrices are not even, hence subtraction cannot be performed."<<endl;
  }
}

void arithmatrix::multi_matrix()
{
  if(r1==c2 && c1==r2)
  {
    for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
      {
        for(k=0;k<c1;k++)
        {
          multi[i][j]=multi[i][j]+(a[i][k]*b[k][j]);
        }
      }
    }
    cout<<"\nMultiplication of the two matrices is: "<<endl;
    {
      for(i=0;i<r2;i++)
      {
        for(j=0;j<c2;j++)
        {
          cout<<multi[i][j]<<"\t";
        }
        cout<<endl;
      }
    }
  }
  else
  {
    cout<<"\nOrder of the matrices are not even, hence multiplication cannot be performed."<<endl;
  }
}

int main()
{
  arithmatrix m;
  m.getdata();
  m.showdata();
  m.add_matrix();
  m.sub_matrix();
  m.multi_matrix();
  return 0;
}
