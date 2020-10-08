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

int isdup(array arr)
{
int i,j,count=0;
for(i=0;i<arr.length;++i)
{
	for(j=i+1;j<arr.length;++i)
	{
		if(arr.A[i]==arr.A[j])
		count++;
	}
	cout<<arr.A[i]<<" is repeated "<<count<<" times."<<endl;
	count=0;
}
return 0;
}

int main()
{
	array arr={{8,3,10,4,2,8,10,5,7,10,3,2},12};
	display(arr);
	isdup(arr);
}
