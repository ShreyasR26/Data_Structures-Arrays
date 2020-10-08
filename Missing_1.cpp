#include<iostream>
#include<stdlib.h>
using namespace std;
struct array
{
	int A[20];
	int length;
};
void display(array arr)
{
	cout<<"Elements:"<<endl;
	for(int i=0;i<arr.length;++i)
	cout<<arr.A[i]<<" ";
	cout<<endl;
}
int sorted(array arr)
{
	for(int i=0;i<arr.length;++i)
	{
		if(arr.A[i]<arr.A[i+1])
		{
			cout<<"Sorted"<<endl;
			return 0;
		}
		
	}
	cout<<"Not Sorted"<<endl;
	return -1;
}
int missing(array arr)
{
	int temp;
	for(int i=0;i<arr.length;++i)
	{
		if(arr.A[i+1]!=arr.A[i]+1)
		{
			temp=arr.A[i]+1;
			cout<<"Missing value is: "<<temp<<endl;
			return temp;
		}
		
			
	}
	return 0;
}

int main()
{
	array arr={{1,2,3,4,5,6,7,9,10,11,12},11};
	display(arr);
	sorted(arr);
	missing(arr);
}
