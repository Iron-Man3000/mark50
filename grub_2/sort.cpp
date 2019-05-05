#include<iostream>
using namespace std;
class sort1{
public:
	int a[10], n=0, temp=0, loc=0, i=0, j=0, mini=0;
	void getdata();
	void swap(int x, int y);
	void insert_sort();
	void bub_sort();
	void sel_sort();
	void display();
	void insert_sort2();
};

void sort1::getdata(){
	cout<<"Enter the size (less than 10) of your array: ";
	cin>>n;
	cout<<"Enter the elements in the array: ";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
}

void sort1::swap(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void sort1::insert_sort(){
	cout<<"Insertion Sort:"<<endl;
	for(i=0; i<n; i++){
			temp=a[i];
			loc=i-1;
			while(loc>=0 && temp<a[loc]){
				a[loc+1]=a[loc];
				loc=loc-1;
				a[loc+1]=temp;
			}
		}
}

void sort1::insert_sort2(){
	for(i=0; i<n; i++){
		temp=a[i];
		loc=i+1;
		while(loc!=0 && temp>a[loc]){
			a[loc]=a[loc-1];
			loc=loc-1;
			a[loc]=temp;
		}
	}
}

void sort1::bub_sort(){
	cout<<"Bubble Sort"<<endl;
	for(i=0; i<n; i++){
		for(j=1; j<n; j++){
			if(a[i]>a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}

void sort1::sel_sort(){
	cout<<"Selection Sort"<<endl;
	for(i=0; i<n; i++){
		mini=i;
		for(j=1; j<n; j++){
			if(a[mini]>a[j]){
				mini=j;
			}
		}
		swap(a[mini], a[j]);
	}
}

void sort1::display(){
	cout<<"Your array is: "<<endl;
	for(i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
}

int main(){
	sort1 s;
	int ch;
	do{
		cout<<"Menu\n 1)Getdata\n 2)Insertion Sort\n 3)Bubble Sort\n 4)Selection Sort\n 5)Display\n 6)Exit\nYour choice is: ";
		cin>>ch;
		switch(ch){
			case 1: s.getdata();
			        break;
			case 2: s.insert_sort();
							break;
			case 3: s.bub_sort();
						  break;
			case 4: s.sel_sort();
							break;
			case 5: s.display();
			        break;
			case 6: cout<<"Thank you! ;-)"<<endl;
			        break;
			default:cout<<"Inavlid Input :-("<<endl;
			        break;
		}
	}
	while(ch!=6);
	return 0;
}
