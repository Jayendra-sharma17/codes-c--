#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void selection(int arr[],int n)
{
    int i,j,min;
    for (int i = 0; i <n-1; i++)
    {
        int min=i;
      for (int j = i+1; j<n; j++)
      {
       if (arr[j]<arr[min])
      
       {
       min=j;
       swap(arr[min],arr[i]);
       }
       
      }
      
    }
    
}
int main()
{
    int num[4]={4,3,2,1};
    int n=4;
    selection(num,n);
    printarr(num,n);
    return 0;
}