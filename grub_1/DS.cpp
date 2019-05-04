#include<iostream>
using namespace std;

class matrix
{
public:
    int i,j,n,m,sum=0,a[10][10];
    void input();
    void dsum();
    void uptri();
    void trans();
};
void matrix::input()
{
    cout<<"Enter the rows of sq matrix :";
    cin>>n;
    cout<<"Enter the columns of sq matrix :";
    cin>>m;

    cout<<"Enter the elements :"<<endl;
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
}
void matrix::dsum()
{

    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
        cout<<"Sum of diagonal elements :"<<sum<<endl;
}

void matrix::trans()
{
    cout<<"Transpose :"<<endl;;
    for(j=0;j<m;j++)
        for(i=0;i<n;i++)
        {

        cout<<a[i][j]<<" ";
            if(i == n - 1)
                cout << endl;
        }
}




int main()
{
    matrix o;
    o.input();
    o.dsum();
    o.trans();
    return (0);
}
