// C++ code to find
// duplicates in O(n) time
#include <bits/stdc++.h>
using namespace std;

int main()
{
int arr[8]={2,2,3,3,5,6,7,8};
int n=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i <n; i++)
{
    arr[arr[i]%n]=arr[arr[i]%n]+n;

}
cout<<"duplicates value are";
for (int i = 0; i <n; i++)
{
    if(arr[i]>n*2)
{
    cout<<i;
}

}


	return 0;
}

