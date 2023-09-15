#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m)
{
     for (int j  = 0 ,i=m; j <n; j++)
     {
      nums1[i]=nums2[j];
      i++;
     }
     sort(nums1.begin(),nums1.end());
    
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
    int num1[6]={1,2,3,0,0,0};
    int num2[3]={2,5,6};

    merge(num1,5,num2,3);
    printarr(num1,9);
    return 0;
}

