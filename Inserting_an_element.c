#include<iostream.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int *A;
    int i,length=0,ele,pos;
    A= new int[10];
    A={1,2,4,7,0,6};
    length=len(A);
    cout<<"Enter element:"<<endl;
    cin>>ele;
    cout<<"Enter position:"<<endl;
    cin>>pos;
    for(i=length;i>pos;--i)
        A[i]=A[i-1];
    A[pos]=ele;
    length+=1;
    for(i=0;i<length;++i)
        cout<<A[i]<<" ";
    return 0;
}
