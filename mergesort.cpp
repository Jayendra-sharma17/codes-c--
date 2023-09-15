#include<stdio.h>

void printarr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
       printf("%d\n",arr[i]);
    }
    printf("\n")
    
}
void mergesort(int arr[],int mid,int low,int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int b[10];
    while (i<=mid && j<=high)
    {
        if (arr[i]<arr[j])
        {
          b[k++]=arr[i++];
        }
        else{
            b[k++]=arr[j++];
        }
        while (i<=mid)
        {
           b[k++]=arr[i++];
        }
        while (j<=high)
        {
           b[k++]=arr[j++];
        }
        for (int i =low; i <= high; i++)
        {
         arr[i]=arr[j];
        }
        
        
        
        
    }
    
}
void merge(int arr[],int low,int high)
{
    int mid;
    if (low<high)
    {
     mid=(low+high)/2;
     merge(arr,low,mid);
     merge(arr,mid+1,high);
   mergesort(arr,mid,low,high);
    }
    
}
int main()
{
    int arr[9]={9,8,7,6,5,4,3,2,1};
    int n=9;
    printarr(arr,n);
    merge(arr,0,n);
    printarr(arr,n);
    return 0;
}