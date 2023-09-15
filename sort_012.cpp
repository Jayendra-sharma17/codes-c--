#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for (int i = 0; i <n; i++)
    {
       cout<<arr[i]<<" ";
    }cout<<endl;
    
}
void sort_0_1_2(int arr[],int n)
{
    int lo=0;
    int mid=lo;
    int ub=n-1;
while(mid<=ub)
{
    switch (arr[mid])
    {
    case 0: swap(arr[lo++],arr[mid++]);
    break;

     case 1: arr[mid++];
       
        break;

         case 2: swap(arr[mid],arr[ub--]);
       
        break;
    
    default: cout<<"defualt number that you are giving to it"<<endl;
        break;
    }
}
}
int main()
{
    int arr[6]={0,2,1,0,1,2};
    int n=6;
printarr(arr,n);
sort_0_1_2(arr,n);
printarr(arr,n);
    return 0;
}