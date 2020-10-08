#include<iostream>
#include<stdlib.h>
using namespace std;

struct array
{
	int *A;
	int length;
};

void rev(array *arr)
{
	int i,j,temp;
	arr->A=new int[arr->length];
	for(i=0,j=(arr->length)-1;i<j;++i,--j)
	{
		temp=arr->A[j];
		arr->A[j]=arr->A[i];
		arr->A[i]=temp;
		
	}
	
}
void display(array *arr)
{
	cout<<"Array:"<<endl;
	for(int i=0;i<arr->length;++i)
	cout<<arr->A[i]<<" ";
}
int main()
{
	array *arr;
	arr->A=new int[arr->length];
	cout<<"Enter Elements:"<<endl;
	for(int i=0;i<arr->length;++i)
	cin>>arr->A[arr->length];
	arr->length=10;
	display(arr);
	cout<<"Reversed array: "<<endl;
	rev(arr);
	
	return 0;
}
