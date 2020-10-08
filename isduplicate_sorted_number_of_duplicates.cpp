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
	int i,j=0;
	for(i=0;i<arr.length;++i)
	{
		if(arr.A[i]==arr.A[i+1])
		{
	        j=i+1;
	        while(arr.A[j]==arr.A[i])
	        j++;
	        cout<<arr.A[i]<<" is duplicated "<<j-i<<" times"<<endl;
	        i=j-1;
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
