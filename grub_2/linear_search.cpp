#include<iostream>
using namespace std;
class lin_search{
public:
	int a[10], size=0, value=0;
	void getdata();
	void search1();
};

void lin_search::getdata(){
	cout<<"Enter the size of your array: ";
	cin>>size;
	cout<<"Enter the elements in the array: ";
	for(int i=0; i<size; i++){
		cin>>a[i];
	}
	cout<<"Your array is: ";
	for(int i=0; i<size; i++){
		cout<<a[i]<<endl;
	}
}

void lin_search::search1(){
	int flag=0;
	cout<<"Enter the value that you want to search: ";
	cin>>value;
	for(int i=0; i<size; i++){
		if(a[i]==value){
			cout<<"The element "<<a[i]<<" was found at "<<i<<"th position"<<endl;
			flag=1;
		}
	}
	if(flag==0){
		cout<<"The element was not found :-("<<endl;
	}
}

int main(){
	lin_search sh;
	sh.getdata();
	sh.search1();
	return 0;
}
