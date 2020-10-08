#include<iostream>
using namespace std;
int diagmatrix(int m, int A[][30])
{
	int i,j;
    cout<<"Enter Elements: "<<endl;
	for(i=0;i<m;++i)
	{
		for(j=0;j<m;++j)
		{
			if(i!=j)
		  	A[i][j]=0;
		  	else
		  	cin>>A[i][j];
		}
    }	
}

int displaymat(int m,int A[][30])
{
	cout<<"MATRIX: "<<endl;
		for(int i=0;i<m;++i)
	{
		for(int j=0;j<m;++j)
		{
			cout<<A[i][j];
			cout<<" ";
		}
		cout<<endl;
    }
}
int main()
{
	int A[30][30];
	diagmatrix(5,A);
	displaymat(5,A);
}
