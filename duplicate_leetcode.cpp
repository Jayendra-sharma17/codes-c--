#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_duplicate(int arr,int n)
{
   int ans=0;
   for (int i = 0; i <arr.size(); i++)
{
      ans=ans^arr[i];
   }
   for (int i = 1; i <arr.size(); i++)
   {
   ans=ans^i;
   }
   return ans;
   
   
}

int main()
{
   int arr[5]={1,2,2,3,4};
   int n=5;
   find_duplicate(arr,n);

   return 0;
}