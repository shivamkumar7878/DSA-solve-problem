#include<iostream>
#include<conio.h>
using namespace std;
void printarr(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<endl;
    }

}
void reversearray(int arr[],int start,int end)
{
    while (start<end)
    {
     int t=arr[start];
        arr[start]=arr[end];
        arr[end]=t;
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6},n;
    n=sizeof(arr)/sizeof(arr[0]);
    printarr(arr,n);
    reversearray(arr,0,n);    
    cout<<"Reverse of your array :"<<endl;
    printarr(arr,n);
    return 0;
}