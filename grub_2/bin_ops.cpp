#include<iostream>
using namespace std;
class bin{
public:
	int x[5], y[5], a[4], b[4], res[5], add[6], n, n1, n2, i, j, carry=0;
	void getdata();
	void onescomp();
	void twocomp();
	void binadd();
	void display();
};

void bin::getdata(){
	cout<<"Enter the number of digits in the binary number: ";
	cin>>n;
	cout<<"Enter the digits of the binary number: "<<endl;
	for(i=0; i<n; i++){
		cin>>x[i];
	}
}

void bin::onescomp(){
	cout<<"One's complement of your binary number is: "<<endl;
	for(i=0; i<n; i++){
		if(x[i]==0){
			y[i]=1;
			//cout<<"1"<<endl;
		}
		else if(x[i]==1){
			y[i]=0;
			//cout<<"0"<<endl;
		}
	}
	//cout<<"y[] is:"<<endl;
	for(i=0; i<n; i++){
		cout<<y[i]<<endl;
	}
}

void bin::twocomp(){
	cout<<"Two's complement of your binary number is: "<<endl;
	for(i=0; i<n; i++){
		res[i] = y[i];
	}
	for(i=n-1; i>=0; i--){
		if(y[i]==1){
			res[i]=0;
		}
		else{
			res[i]=1;
			break;
		}
	}
	for(i=0; i<n; i++){
		cout<<res[i]<<endl;
	}
}

void bin::binadd(){
	cout<<"Enter the number of digits in the first binary number: "<<endl;
	cin>>n1;
	cout<<"Enter the digits of the first binary number: "<<endl;
	for(i=0; i<4; i++){
		cin>>a[i];
	}

	cout<<"Enter the number of digits in the second binary number: "<<endl;
	cin>>n2;
	cout<<"Enter the digits of the second binary number: "<<endl;
	for(i=0; i<4; i++){
		cin>>b[i];
	}
	cout<<"Addition is:"<<endl;
	for(i=0; i<4; i++){
		if(a[i]+b[i]+carry==3){
			add[i]=1;
			carry=1;
		}
		else if(a[i]+b[i]+carry==2){
			add[i]=0;
			carry=1;
		}
		else if(a[i]+b[i]+carry==1){
			add[i]=1;
			carry=0;
		}
		else if(a[i]+b[i]+carry==0){
			add[i]=0;
			carry=0;
		}
	}
	add[4]=carry;
	for(i=0; i<5; i++){
		cout<<add[i]<<endl;
	}
}

void bin::display(){
	cout<<"Your binary number is: "<<endl;
	for(i=0; i<n; i++){
		cout<<x[i]<<endl;
	}
}

int main(){
	bin b;
	b.getdata();
	b.display();
	b.onescomp();
	b.twocomp();
	b.binadd();
	return 0;
}
