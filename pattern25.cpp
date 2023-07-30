#include<iostream>
using namespace  std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
   int row=1;
   while (row<=n)
   {
    //printing space 
  
   int space =n-row;
    while (space )
 
    {
        cout<<" ";
        space --;
        /* code */
    }
    int col=1;
    //printing stars
    while (col<=row)
    {
       cout<<"*";
       col++;
    }
    cout<<endl;
    row++;

    
   }
   
    
    return 0;
}