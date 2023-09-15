#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(arr[s++],arr[e--]);
    }
}
int printarr(int arr[],int n)
{
    for (int i = 0; i <n; i++)
    {
    cout<<arr[i]<<" ";


    }
    cout<<endl;
    
}
int main()
{
    int num[6]={2,3,8,1,9,4};
    int n=6;
    printarr(num,6);
    reverse(num,n);
    printarr(num,n);

    return 0;
}
