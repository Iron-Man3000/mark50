#include<iostream>
using namespace std;

class lin_search{
public:
	int a[10],size=0,value=0;
	void get_data();
	void search1();
};

void lin_search::get_data(){
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Your array is"<<endl;
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
}

void lin_search::search1(){
	cout<<"Enter the value you want to search"<<endl;
	cin>>value;
	flag=0;
	for(int i=0;i<size;i++){
		if(a[i]==value){
				cout<<"The element"<<a[i]<<"was found at"<<i<<"position"<<endl;
				flag=1;
		}
	}
	if(flag==0){
		cout<<"The element was not found"<<endl;
	}
	}

	int main(){
		lin_search s;
		s.get_data();
		s.search1();
		return 0;
	}
