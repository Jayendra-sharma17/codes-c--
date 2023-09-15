#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {if (arr[mid]==key)
    {
      return mid;
    }
    if (arr[mid]<key)
    {
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
    
    }
    
    return -1;
}
int main()
{
    int num[6]={2,4,6,8,9,10};
    int key;
    cout<<"enetr the key"<<endl;
    cin>>key;
    int n=6;
    int output=binary(num,n,key);
   cout<<"the number is "<<key<<"  "<<"at the location of "<<output<<endl;
    return 0;
}