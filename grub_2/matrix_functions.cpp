#include<iostream>
using namespace std;
class matrix
{
  public:
   int a[10][10], b[10][10];
   int i=0, j=0, min, cntu=0, cntl=0, sum=0, r=0, c=0, t=0;
   void getdata();
   void showdata();
   void uplowtraingle();
   void diagsum();
   void transpose();
   void sample();
};

void matrix::getdata()
{
  cout<<"Enter the number of rows: ";
  cin>>r;
  cout<<"Enter the number of columns: ";
  cin>>c;
  cout<<"Enter the elements of the matrix: "<<endl;

  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>a[i][j];
    }
  }

  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      b[i][j]=0;
    }
  }

  cout<<endl;
}

void matrix::showdata()
{
  cout<<"Your matrix is: "<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cout<<a[i][j];
      cout<<"\t";
    }
    cout<<endl;
  }

  cout<<endl;
}

void matrix::uplowtraingle()
{
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       if (j>i && a[i][j]==0)
       {
            cntu++;
       }
       else if (j<i && a[i][j]==0)
       {
            cntl++;
       }
    }
  }

  if(cntu==3)
  {
    cout<<"Matrix is an upper traingular matrix."<<endl;
  }
  else if(cntl==3)
  {
    cout<<"Matrix is a lower triangular matrix."<<endl;
  }
  else
  {
    cout<<"Matrix is neither upper nor lower traingular."<<endl;
  }
}

void matrix::diagsum()
{
  for (i=0;i<r;i++)
  {
     for (j=0;j<c;j++)
     {
        if (i==j)
        {
           sum=sum+a[i][j];
        }
     }
   }

   cout<<"Sum of the diagonal elements of the matrix is: "<<sum<<endl;
}

void matrix::transpose()
{
  cout<<"Transpose of the matrix is: "<<endl;
  t=r;
  r=c;
  c=t;
  for (i=0;i<r;i++)
  {
    for (j=0;j<c;j++)
    {
       b[i][j]=a[j][i];
       cout<<b[i][j];
       cout<<"\t";
    }
    cout<<endl;
  }
}

int main()
{
  int ch;
  matrix m;
  m.getdata();
  m.showdata();
  do
  {
    cout<<"\nEnter your choice:\n 1) Find if matrix is upper traingular\n 2) Find sum of the diagonal of the matrix\n 3) Find transpose of the matrix\n 4) Exit\nYour choice: ";
    cin>>ch;
    switch(ch)
    {
      case 1: m.uplowtraingle();
              break;
      case 2: m.diagsum();
              break;
      case 3: m.transpose();
              break;
      case 4: cout<<"Goodbye!"<<endl;
              break;
      default: cout<<"Choice not found"<<endl;
              break;
    }
  }
  while(ch!=4);

  return 0;
}
