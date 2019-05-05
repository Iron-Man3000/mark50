#include<iostream>
using namespace std;
class matrix
{
  public:
   int a[3][3], b[3];
   int i=0, j=0, max=0, min, col=0, row=0, num1=0, num2=0, r=0, c=0;
   void getdata();
   void showdata();
   void maxe();
   void mine();
   void saddle();
   void sample();
};

void matrix::getdata()
{
  cout<<"Enter the elements of the 3x3 matrix: "<<endl;

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>a[i][j];
    }
  }

  cout<<endl;
}

void matrix::showdata()
{
  cout<<"Your matrix is:"<<endl;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cout<<a[i][j];
      cout<<"\t";
    }
    cout<<endl;
  }

  cout<<endl;
}

void matrix::maxe()
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
       if(max<a[i][j])
       {
          max=a[i][j];
          col=j;
       }
    }
  }
  cout<<"Maximum element of the matrix is: "<<max<<endl;
  cout<<"In column: "<<col<<endl;
}


void matrix::mine()
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
       min=a[0][0];
       if(min>a[i][0])
       {
          min=a[i][0];
          row=i;
       }
    }
  }
  cout<<"Minimun element of the matrix is: "<<min<<endl;
  cout<<"In row: "<<row<<endl;
}

void matrix::saddle()
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<(col-1);j++)
    {
      b[i]=a[i][j];
      //cout<<b[i]<<"\t";
    }
    //cout<<endl;
  }
  cout<<endl;

  /*for(i=0;i<3;i++)
  {
    cout<<b[i]<<endl;
  }*/

  for(i=0;i<=col;i++)
  {
    if(b[i]>=num1)
    {
      num1=b[i];
      c=i;
    }
  }
  //cout<<"num1= "<<num1<<"\nand c= "<<c<<endl;

  for(i=0;i<=c;i++)
  {
    for(j=0;j<3;j++)
    {
      num2=a[c][0];
        if(num2>a[i][j])
        {
          num2=a[i][j];
        }
    }
  }
  //cout<<"num2= "<<num2<<endl;

  if(num1==num2)
  {
    cout<<"Saddle point exists.\nSaddle point is: "<<num1<<endl;
  }
  else
  {
    cout<<"Saddle point doesn't exists."<<endl;
  }

}

int main()
{
  matrix m;
  m.getdata();
  m.showdata();
  m.maxe();
  m.mine();
  m.saddle();
  return 0;
}
