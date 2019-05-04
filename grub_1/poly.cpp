
#include<iostream>
using namespace std;

class poly{
public:
  void polyy(){
    int eq1[50],eq2[50],i,j,add[50],sub[50],mul[100],deg1,deg2,m;
    for(i=0;i<50;i++){
      eq1[i] = 0;
      eq2[i] = 0;
    }
    cout<<"Enter highest degree in first polynomial : "<<endl;
    cin>>deg1;
    cout<<"Enter the coefficients from lower degree to highest degree"<<endl;
    for(i=0;i<deg1+1;i++){
      cin>>eq1[i];
    }
    cout<<"Enter highest degree in 2nd polynomial : "<<endl;
    cin>>deg2;
    cout<<"Enter the coefficients from lower degree to highest degree"<<endl;
    for(i=0;i<deg2+1;i++){
      cin>>eq2[i];
    }
    for(i=0;i<50;i++){
      add[i] = 0;
      sub[i] = 0;
    }
    for(i=0;i<100;i++){
      mul[i] = 0;
    }
    if(deg1>=deg2){
      m = deg1;
    }
    else{
      m = deg2;
    }
    for(i=0;i<m+1;i++){
      add[i] = eq1[i] + eq2[i];
      sub[i] = eq1[i] - eq2[i];
    }
    for(i=0;i<deg1+1;i++){
      for(j=0;j<deg2+1;j++){
        mul[i+j] = mul[i+j] + (eq1[i] * eq2[j]);
      }
    }
    cout<<"MULTIPLICATION = "<<endl;
    for(i=0;i<(deg1+deg2+1);i++){
      cout<<mul[i]<<"x^"<<i<<"\t";
    }
    cout<<"\n";
    cout<<"ADDITION = "<<endl;
    for(i=0;i<m+1;i++){
      cout<<add[i]<<"x^"<<i<<"\t";
    }
    cout<<"\n";
    cout<<"SUBTRACTION = "<<endl;
    for(i=0;i<m+1;i++){
      cout<<sub[i]<<"x^"<<i<<"\t";
    }
    cout<<"\n";
  }
};

int main(){
  poly obj;
  obj.polyy();
  return 0;
}

/*
  OUTPUT:
  Enter highest degree+1 in first poly
3
Enter the coefficients from lower degree to highest degree
1
2
3
Enter highest degree+1 in 2nd poly
4
Enter the coefficients from lower degree to highest degree
1
2
3
4
MULTIPLICATION =
1x^0    4x^1    10x^2   16x^3   17x^4   12x^5
ADDITION =
2x^0    4x^1    6x^2    4x^3
SUBTRACTION =
0x^0    0x^1    0x^2    -4x^3
*/
