#include<iostream>
using namespace std;
int CheckMax(int arr[],int size)
{
    int i=0,max;
    max=arr[i];
    while (size>0)
    {
        if (max<arr[i])
         max=arr[i];
        i++;
        size--;
    }
    return max;

}
int CheckMin(int arr[],int size)
{
    int i=0,min;
    min=arr[i];
    while (size>0)
    {
        if (min>arr[i])
         min=arr[i];
        i++;
        size--;
    }
    return min;

}
int main()
{
    int arr[5];
    cout<<"Enter array element :";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Largest element of an array is :"<<CheckMax(arr,5)<<endl;
    cout<<"smallest element of an array is :"<<CheckMin(arr,5);
}