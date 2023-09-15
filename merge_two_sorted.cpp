#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m)
    {
       if (arr1[i]<arr2[j])
       {
        arr3[k]=arr1[i];
        k++;
        i++;
       }
       else{
        arr3[k++]=arr2[j++];
       }

       
    }
    while(i<n)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
}
void printarr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int num1[5]={1,3,5,7,9};
    int num2[3]={2,4,6};
    int num3[8]={0};
    merge(num1,5,num2,3,num3);
    printarr(num3,8);
    return 0;
}