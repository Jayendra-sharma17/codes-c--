#include<iostream>
using namespace std;
int main()
{
    int n,i,m=0,flag=0;
    cout<<"enter the number "<<endl;
    cin>>n;
    m=n/2;
    for ( i = 2; i <=m; i++)
    {
        if (n%i==0)
        {
          cout<<"not prime for"<<endl;
          flag=1;
          break;
        }
       

        
    }
    if (flag==0)
    {
     cout<<"prime for"<<endl;
    }
    return 0;
    
}