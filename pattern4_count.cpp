#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"enter n";
    cin>>n;
    int count =1;
    for (i  = 0; i <n; i++)
    {
       for (j  = 0; j <n; j++)
       {
       cout<<count;
       count++;
       }
       cout<<endl;
       
    }
    
  
    
    return 0;
}
