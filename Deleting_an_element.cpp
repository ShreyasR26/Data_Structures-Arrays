#include<iostream>
#include <stdlib.h>

using namespace std;

struct array
{
    int *A;
    int size1;
    int length;
};
void display(array ar)
{
    cout<<"Elements:"<<endl;
    for(int i=0;i<ar.length;++i)
        cout<<ar.A[i]<<endl;
}

int main()
{
    array arr;
    int i,j,n,ele;
    arr.A= new int[arr.size1];
    cout<<"Enter Array Size:"<<endl;
    cin>>arr.size1;
    cout<<"Enter Array length:"<<endl;
    cin>>n;
    if(arr.size1<n)
    {
        cout<<"Not Possible"<<endl;
        exit(0);
    }
    else
    {


        cout<<"Enter the array"<<endl;
         for(i=0;i<n;++i)
            cin>>arr.A[i];
         arr.length=n;
         cout<<"Enter element you want to delete:"<<endl;
         cin>>ele;
         for(i=0;i<n;++i)
         {
             if(arr.A[i]==ele)
             {
                for(j=i;j<arr.length-1;++j)

                    arr.A[i]=arr.A[i+1];

             }

             arr.length--;
         }
         display(arr);
    }
    return 0;
}

