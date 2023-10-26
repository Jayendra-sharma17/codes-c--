#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n";
    cin>>n;
    int row=1;
    for (int row = n; row >= 0; row--)
    {
       for (int col=row; col >=0; col--)
       {
    cout<<"*"<<" ";
    
       }
       cout<<endl;
    }
    
    return 0;
}