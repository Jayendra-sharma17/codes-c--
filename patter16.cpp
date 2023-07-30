#include<iostream>
using namespace std;
int main()
{
    int row,col,val;
  int n;
    cout<<"enter n";
    cin>>n;

    for (row  = 1; row <=n; row++)
    {
        
       for (col  = 1; col <=n; col++)
       {
        char ch='A'+col-1;
      cout<<ch<<" ";
      ch++;

       }
       cout<<endl;
       
    }
    
    return 0;
}