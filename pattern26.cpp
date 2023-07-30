#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n";
    cin>>n;
    int row=1;
    for (int row = 1; row <= n; row++)
    {
       for (int col = 1; col < n-row+1; col++)
       {
    cout<<"*"<<" ";
    
       }
       cout<<endl;
    }
    
    return 0;
}