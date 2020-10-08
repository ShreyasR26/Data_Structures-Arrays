#include<iostream>
#include<stdlib.h>
using namespace std;
struct array
{
	int A[30];
	int size;
	int length;
};



void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int search(array arr)
{
	int i,key;
	//arr.A=new int[arr.size];
	cout<<"Enter Key:"<<endl;
	cin>>key;
	for(i=0;i<arr.length;++i)
	{
		if(key==arr.A[i])
		{
			cout<<arr.A[i]<<" found at position "<<i+1<<endl;
		   swap(arr.A[i],arr.A[0]);
		   return i;
		}
	}
	return -1;
}

void display(array arr)
{
	cout<<"Elements:"<<endl;
	for(int i=0;i<arr.length;++i)
	cout<<arr.A[i]<<endl;
}

int main()
{
	array arr={{1,2,4,7,0,6,3},10,7};
	display(arr);
	search(arr);
	return 0;
}
