#include<iostream>
using namespace std;
long long int sqrt(int n)
{
    int s=0;
    int e=n;
  long long  int mid=s+(e-s)/2;
   long long int ans=-1;
    while(s<=e)
    {
       long long int sqaure=mid*mid;

        if(sqaure==n)
        {
            return mid;

        }
       if(sqaure<n)
        {
            ans=mid;
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
    int n;
    cout<<"enter te number";
    cin>>n;
   int temp=sqrt(n);
    cout<<temp;
    return 0;
}