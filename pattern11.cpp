#include<iostream>
using namespace std;
int main()
{
    int row,col,count=1,n;
    cout<<"enter the n";
    cin>>n;
    for (row = 1; row <=n; row++)
    {
        for (col  = 1; col <=n; col++)
        {
        cout<<count<<" ";
        count++;
        }
        cout<<endl;
        
    }
    
    return 0;
}