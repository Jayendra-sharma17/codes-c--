#include<iostream>
using namespace std;
int missing(int arr[],int n)
{
    int total=(n)*(n+1)/2;
    for (int i = 0; i < n; i++)
    {
        total-=arr[i];
    }
    return total;
    
}
int main()
{
    int arr[]={1,2,3,5,6};
    int n=5;
    int ans=missing(arr,n);
    cout<<ans;
    return 0;
}
