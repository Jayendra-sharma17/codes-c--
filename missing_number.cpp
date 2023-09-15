#include<iostream>
using namespace std;
int missing(int arr[],int n)
{
    int m=n+1;
    int total=(m)*(m+1)/2;
    int sum=0;
    for (int i = 0; i <n; i++)
    {
       sum+=arr[i];
    }

   return total-sum;
    
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
  int miss=missing(arr,size);
  cout<<miss;
    return 0;
}