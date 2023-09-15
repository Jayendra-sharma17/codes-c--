#include<iostream>
using namespace std;
int main()
{
    int row,col,count=1,n;
    cout<<"enter the n";
    cin>>n;
    for (row = 1; row <=n; row++)
    {
        for (col  = 1; col <=row; col++)
        {
        cout<<count<<" ";
        count++;
        }4
        
        cout<<endl;
        
    }
    
    return 0;
}