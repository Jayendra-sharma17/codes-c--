#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"enter the n";
    cin>>n;
  for (row  = 0; row<=n; row++)
  {
   for ( col = 0; col <=row; col++)
   {cout<<"*"<<" ";

   }
   cout<<endl;
   
  }
  
 
    
    return 0;
}