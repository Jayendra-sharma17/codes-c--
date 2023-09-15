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
void insertion(int arr[],int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp=arr[i];
        int j = i-1;
     for (; j >=0; j--)
     {
      if (arr[j]>temp)
      {
      arr[j+1]=arr[j];
      }
      else
      {
        break;
      }
      
     }
     arr[j+1]=temp;
     
      
       
        
    }
    
}
int main()
{
    int num[4]={4,3,2,1};
    int n=4;
 
    insertion(num,n);
    printarr(num,n);
    return 0;
}