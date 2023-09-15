#include<iostream>
using namespace std;
int getsum(int *arr,int n)
{
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
   sum+=arr[i];
    }
    
    return sum;
}
int main()
{
int arr[6];

cout<<"Enter the elements of array"<<endl;
for (int i = 0; i < 6; i++)
{
    cin>>arr[i];
}
for (int i = 0; i <6; i++)
{
    cout<<arr[i]<<endl;
}



cout<<"sum is"<<getsum(arr+3,3)<<endl;
    return 0;
}