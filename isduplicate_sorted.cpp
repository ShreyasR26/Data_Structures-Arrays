#include<iostream>
using namespace std;
struct array
{
	int A[30];
	int length;
};
void display(array arr)
{
	cout<<"Elements:"<<endl;
	for(int i=0;i<arr.length;++i)
	cout<<arr.A[i]<<" ";
	cout<<endl;
}
int isduplicate(array arr)
{
	int i,lastdup=0;
	for(i=0;i<arr.length;++i)
	{
		if(arr.A[i+1]==arr.A[i] && arr.A[i]!=lastdup)
		{
		 lastdup=arr.A[i];
	        
		 cout<<arr.A[i]<<" is duplicated"<<endl;
	}
	        
		}
	return 0;
}
int main()
{
	array arr={{3,4,5,5,6,8,8,9,10,10,10,13},12};
	display(arr);
	isduplicate(arr);
}
