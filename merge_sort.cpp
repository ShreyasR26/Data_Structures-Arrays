#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int A[20]={1,3,5,7,9,11};
	int B[20]={2,4,6,8,10};
	int C[20];
	int i=0,j=0,k=0;
	int m,n;
	cout<<"Enter size of A and B:"<<endl;
	cin>>m>>n;
	while(i<m-1 && j<n-1)
	{
		if(A[i]<B[j])
		C[k++]=A[i++];
		else
		C[k++]=B[j++];
	}
	for(;i<m;++i)
	C[k++]=A[i];
	for(;j<n;++j)
	C[k++]=B[j];
	k=m+n;
	for(int t=0;t<k;++t)
	{
		cout<<C[t]<<" ";
	}
}
