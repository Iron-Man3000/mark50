
#include<iostream>
using namespace std;
class search{
    public:
    int x,y,z;
    int arr[50];
    int i,j,k,flag;
    int first,last,mid;

    void getdata(){
        cout<<"Enter the limit of the numbers\n";
        cin>>x;
        cout<<"Enter the numbers in the list\n";
        for(i=0;i<x;i++){
            cin>>arr[i];

        }


    }
        void linearsearch()
        {
            cout<<"Enter the key number you want to find\n";
            cin>>y;
            for(i=0;i<x;i++){
                if(y!=arr[i]){
                    continue;
                }
                else{
                if(y==arr[i]){
                    cout<<"The number has been found at"<<i+1<<endl;
                    break;
                }


                }

                            }

        }




        void binarysearch(){
            cout<<"Enter the number you want to find";
            cin>>z;
            first=0;
            last=x-1;
            mid=(first+last)/2;
            while(first<=last)
                {

                if(arr[mid]<z){
                    first=mid+1;
                }
                else
                    if(arr[mid]==z){
			            cout<<z<<"has been found at "<<mid+1<<"th location"<<"\n";
			            break;
		                    }
		            else{
			            last = mid - 1;
		                }
		            mid = (first + last)/2;
	    }
	        if(first > last){
		cout<<z<<"has not been found";
	}
            }



        };







int main(){
    search s;
int a,b;

    do{
        cout<<"Enter\n 1.Getdata\n2.Linear search\n3.Binary search\n";
        cin>>a;
        switch(a){
                case 1: s.getdata();
                    break;
                case 2: s.linearsearch();
                    break;
                case 3: s.binarysearch();



        }
            cout<<"Enter 1 to continue and any other key to exit\n";
            cin>>b;
                }while(b==1);

return 0;


}



/*
PS D:\Programs\CPP\2173100> ./a.exe
Enter
 1.Getdata
2.Linear search
3.Binary search
1
Enter the limit of the numbers
5
Enter the numbers in the list
1
2
3
4
5
Enter 1 to continue and any other key to exit
1
Enter
 1.Getdata
2.Linear search
3.Binary search
2
Enter the key number you want to find
4
The number has been found at4
Enter 1 to continue and any other key to exit
1
Enter
 1.Getdata
2.Linear search
3.Binary search
3
Enter the number you want to find4
4has been found at 4th location
Enter 1 to continue and any other key to exit
*/
