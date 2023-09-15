#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
        s=mid+1;
}
else{
e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
int main()
{
    int num[7]={1,2,3,3,3,3,5};
  
  int nm=firstocc(num,7,5);
cout<<"first occurence is"<<nm;
  int nm1=lastocc(num,7,3);
  cout<<"last occ is"<<nm1;



    return 0;
}