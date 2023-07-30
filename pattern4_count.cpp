#include<iostream>
using namespace std;
int main()
{
    int i,n,j,count;
    cout<<"enter n";
    cin>>n;
    i=1;
    count=1;
    while (i<=n)
    {
        /* code */
        j=1;
        while (j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}
