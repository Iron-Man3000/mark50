#include<iostream>
using namespace std;

class matrix
{
public:
    int i,j,k,n,m,b[10][10],a[10][10],c[10][10],mul[10][10];
    void input();
    void sum();
    void subs();
    void multi();
};


void matrix::input()
{
    cout<<"Enter the rows of sq matrix :";
    cin>>n;
    cout<<"Enter the columns of sq matrix :";
    cin>>m;

    cout<<"Enter the elements of matrix1 :"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }


    cout<<"Enter the elements of matrix2 :"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cin>>b[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cout<<b[i][j]<<" ";
        cout<<endl;
    }
}

void matrix::sum()
{

    for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
            c[i][j]=a[i][j]+b[i][j];
        }

    cout<<"Sum of matrix :"<<endl;

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            {
                cout<<c[i][j]<<" ";
                cout<<endl;
            }
}

void matrix::subs()
{

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
            }
        cout<<"Substract of matrix : "<<endl;

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            {
                cout<<c[i][j]<<" ";
                cout<<endl;
            }
}
void matrix::multi()
{

	   for(i=0;i<n;i++)
	   {
            for(j=0;j<n;j++)
                for(k=0;k<m;k++)
                    mul[i][j] = mul[i][j] + (a[i][k]*b[k][j]);
        }
cout<<"Multiplication of matrix : ";
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            {
                cout<<mul[i][j]<<" ";
                cout<<endl;
            }
}


int main()
{
    matrix o;
    o.input();
    o.sum();
    o.subs();
    o.multi();
    return 0;
}
