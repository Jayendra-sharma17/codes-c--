#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void larget(int arr[],int n)
{
    int i;
    if(n<2)
    {
        cout<<"invalid input";
        return ;
    }
    sort(arr,arr+n);
    for (int i = n-2; i >=0; i--)
    {
     if(arr[i]!=n-1)
     {
        printf("the second is %d",arr[i]);
        return ;
     }
    }
    printf("no element is lar");
    

}
int main()
{
    int arr[5]={33,24,56,22,87};
    int n=5;
    larget(arr,n);
    return 0;
}