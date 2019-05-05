#include<iostream>
using namespace std;
class bin_search{
public:
	int a[10], size=0, value=0, i=0;
	void getdata();
	void search1();
};

void bin_search::getdata(){
	cout<<"Enter the size of your array: ";
	cin>>size;
	cout<<"Enter the elements in the array:"<<endl;
	for(int i=0; i<size; i++){
		cin>>a[i];
	}
	cout<<"Your array is: ";
	for(int i=0; i<size; i++){
		cout<<a[i]<<endl;
	}
}

void bin_search::search1(){
	int lowb=0, upb=0, mid=0;
	cout<<"Enter the value that you want to search: ";
	cin>>value;
	lowb=0;
	upb=(size-1);
	mid=(upb+lowb)/2;
	while(lowb<=upb){
		if(a[mid]==value){
			cout<<"The element "<<a[mid]<<" was found at "<<mid<<"th position"<<endl;
			break;
		}
		else if(a[mid]<value){
			lowb=mid+1;
		}
		else{
			upb=mid-1;
		}
		mid=(upb+lowb)/2;
	}
	if(lowb>upb){
		cout<<"Element was not found."<<endl;
	}
}

int main(){
	bin_search b;
	b.getdata();
	b.search1();
	return 0;
}
