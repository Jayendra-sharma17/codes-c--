#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter n";
    cin>>n;
    i=1;
    while (i<=n)                
    {
        /* code */
        j=1;
        while (j<=n)
        {
        cout<<n+j+1<<" ";

        j++;
        }
        cout<<endl;
        i++;

        
    }
    return 0;
}