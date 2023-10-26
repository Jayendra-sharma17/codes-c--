#include<iostream>
using namespace std;
int main()
{
    int row,col,val;
  int n;
    cout<<"enter n";
    cin>>n;
//  char ch='A';
    for (row  = 1; row <=n; row++)
    {
        
       for (col  = 1; col <=n; col++)
       {
       char ch='A';
      //  int row=ch;

      cout<<ch<<" ";
      ch++;

       }
       cout<<endl;
       
    }
    
    return 0;
}