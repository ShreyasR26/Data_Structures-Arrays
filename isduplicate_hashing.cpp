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
int H[30];
for(int i=0;i<arr.length;++i)
{
	H[i]=0;
 }
for(int i=0;i<arr.length;++i)
{
	H[arr.A[i]]++;
}

cout<<"Duplicated Elements:"<<endl;
for(int i=0;i<arr.length;++i)
{
	if(H[i]>=2)
	{
	
		cout<<i<<" is dupliated "<<H[i]<<" times.";
		cout<<endl;
	}
	
}
return 0;
}

int main()
{
	array arr={{4,4,5,6,8,8,8,9,10,10,10,10,12},13};
	display(arr);
	isdup(arr);
}
