#include<iostream>
using namespace std;
int pivotnum(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binary(int arr[],int s,int e,int key)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while (start<=end)
    {if (arr[mid]==key)
    {
      return mid;
    }
    if (arr[mid]<key)
    {
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
    
    }
    
    return -1;
}

int findpos(int arr[],int n,int k)
{
    int pivot=pivotnum(arr,n);
    if(k>=pivot && k<=arr[n-1])
    {
        return binary(arr,pivot,n-1,k);
    }
    else{
        return binary(arr,0,pivot-1,k);
    }
}

