#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int ans=0;
    cout<<"enter n";
    cin>>n;
    for (int i = 0; i < 30; i++)
    {
     ans=pow(2,i);
    }
    if (ans==n)
    {
      cout<<"power of 2";
    }
    cout<<ans;
    
    
    return 0;
}