#include<iostream>
#include <stdlib.h>

using namespace std;

struct array
{
    int A[20];
    int size1;
    int length;
};
void display(array ar)
{
    cout<<"Elements:"<<endl;
    for(int i=0;i<ar.length;++i)
        cout<<ar.A[i]<<" ";
}

int sorted(array arr)
{
    int i;
    for(i=0;i<arr.length;++i)
    {


        if(arr.A[i]<arr.A[i+1])
           return true;
    }
        return false;
}
int insert1(array arr, int ele)
{
    int i;
    i=arr.length-1;
    while(arr.A[i]>ele)
    {
        arr.A[i+1]=arr.A[i];
        i--;
    }
    arr.length++;
}

void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void posneg(array arr)
{
    int i,j;
    i=0;
    j=arr.length-1;
    while(i<j)
    {
        while(arr.A[i]<0)
            i++;
        while(arr.A[j]>0)
            j--;
        swap(arr.A[i],arr.A[j]);
    }
}
int main()
{
  array arr={{-2,-5,-3,1,5,12,-15,7,3,13},20,10};
  posneg(arr);
  cout<<"Positive Negative:"<<endl;
  display(arr);

    return 0;
}
