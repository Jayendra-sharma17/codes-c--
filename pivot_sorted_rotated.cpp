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
int main()

{
    int num[6]={8,10,17,21,1,3};
    int n=6;
  int nm=  pivotnum(num,n);
  cout<<"the pivot is"<<nm<<" ";
    return 0;
}