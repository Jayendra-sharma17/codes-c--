#include<iostream>
using namespace std;
int main()
{
    int row,col,n,val;
    cout<<"enter n";
    cin>>n;

    for (row  = 1; row <=n; row++)
    {
            // val=row;
       for (col  = 1; col <=row; col++)
       {
      cout<<row+col+1;
    //   val--;
       }
       cout<<endl;
       
    }
    
    return 0;
}