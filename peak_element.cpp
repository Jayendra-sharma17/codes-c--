#include<iostream>
using namespace std;
int peakel(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
         
            s=mid+1;
        }
        else{
           e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}
int main()
{
    int num[4]={3,4,5,1};
    int n=4;
    int ch=peakel(num,4);
    cout<<"peak element is"<<ch;
    return 0;
}