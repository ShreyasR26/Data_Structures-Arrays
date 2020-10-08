#include<iostream>
#include<stdlib.h>
using namespace std;

struct array
{
	int A[20];
	int size;
	int length;
}arr;

int bin_search(array arr,int key)
{
	int mid,i;
	int l=0;
	int h=arr.length-1;
	while(l<=h)
	{
	 
	  	mid=(l+h)/2;
	  	if(key==arr.A[mid])
	  	return (mid+1);
	  	else if(key<arr.A[mid])
	  	   h=mid-1;
	  	else
	  	   l=mid+1;
		  
	}
	cout<<"Not present"<<endl;
	return -1;
}


void display(array arr)
{
	cout<<"Array:"<<endl;
	for(int i=0;i<arr.length;++i)
	cout<<arr.A[i]<<" ";
	cout<<endl;
}
int main()
{
	arr={{2,4,5,7,9,11,16,23,27,34,35,41,50},20,13};
	display(arr);
	cout<<bin_search(arr,50)<<endl;
	
	return 0;
	
}
