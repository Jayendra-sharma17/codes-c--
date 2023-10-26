#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
int cnt=0;
for (int i = s+1; i <=e; i++)
{
   if (arr[i]<=pivot)
   {
   cnt++;
   }

   
}
// place karenge pivot ko uski sai jagah pr
int pivotindex=s+cnt;
swap(arr[pivotindex],arr[s]);

// left and right wala part solve krna 
int i=s,j=e;
while(i<pivotindex && j>pivotindex)
{
    while (arr[i]>pivot)
    {
       i++;
    }
    while (arr[j]<pivot)
    {j--;
    }
    if (i<pivotindex && j>pivotindex)
    {
      swap(arr[i++],arr[j--]);
    }
    
    
    
}

    return pivotindex;
}
void quicksort(int arr[],int s,int e)
{
    if (s>=e)

    {
       return ;
    }
    // partiotion krenge do part mei 
    int p=partition(arr,s,e);
    // left wala part sort krenge
    quicksort(arr,s,p-1);
    // right wala part sort karenge
    quicksort(arr,p+1,e);
    
}
int main()
{
    int arr[5]={5,2,1,3,4};
    int n=5;
    quicksort(arr,0,n-1);
    for (int i = 0; i <n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}