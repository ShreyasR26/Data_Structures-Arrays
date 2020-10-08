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
int max(int A[],int l)
{
	int max=0;
	for(int i=0;i<l;++i)
	{
	if(A[i]>max)
	max=A[i];    
	}
	return max;
}
int min(int A[], int l)
{
	int min=0;
	for(int i=0;i<l;++i)
	{
		if(A[i]<min)
		min=A[i];
	}
	return min;
}
int missing(array arr)
{
int H[30];
for(int i=0;i<max(arr.A,arr.length);++i)
{
	H[i]=0;
 }
for(int i=0;i<max(arr.A,arr.length);++i)
{
	H[arr.A[i]]++;
}
cout<<"Missing Elements:"<<endl;
for(int i=min(arr.A,arr.length);i<max(arr.A,arr.length);++i)
{
	if(H[i]==0)
	{
	
		cout<<i<<" ";
		cout<<endl;
	}
	
}
return 0;
}

int main()
{
	array arr={{3,4,7,11,2,6,1,12,5,},9};
	display(arr);
	missing(arr);
}
