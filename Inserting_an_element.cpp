#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *A[10];
    int i,length=6,ele,pos;
    A= new int[10];
    A={1,2,4,7,0,6};
      cout<<"Enter element:"<<endl;
    cin>>ele;
    cout<<"Enter position:"<<endl;
    cin>>pos;
    for(i=length;i>pos-1;--i)
        A[i]=A[i-1];
    A[pos-1]=ele;
    length+=1;
    for(i=0;i<length;++i)
        cout<<A[i]<<" ";
    return 0;
}

