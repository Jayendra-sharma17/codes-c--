#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter n";
    cin>>n;
    row=1;
    while (row<=n)
    {
        col=1;
        while (col<=n)
        {
          cout<<"*"<<" " ;
          col++;

        }
        cout<<endl;
        row++;
        

    }
    
    return 0;
}