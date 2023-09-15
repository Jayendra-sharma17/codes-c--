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
void bubble(int arr[],int n)
{
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j<n; j++)
        {
           if (arr[j]<arr[i])
           {
            swap(arr[j],arr[i]);
           }
           
        }
        
    }
    
}
int main()
{
    int num[4]={4,3,2,1};
    int n=4;
    printarr(num,n);
    bubble(num,n);
    printarr(num,n);
    return 0;
}