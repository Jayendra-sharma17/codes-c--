#include<iostream>
using namespace std;
int main()
{
    int row,col,n,val;
    cout<<"enter n";
    cin>>n;
    
   row=1;
   val=row;
   while (row<=n)
   {
    val=row;
   col=1;
   while (col<=row)
   {
    cout<<val;
    val++;
    col++;
   }
   cout<<endl;
   row++;
   
   }
   
    
    return 0;
}