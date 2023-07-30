#include<iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"enter the n";
    cin>>n;
    i=2;
    while (i<=n)
    {
        if (n%i==0)
        {
            /* code */
            cout<<"not primt for"<<i<<endl;
        }
        else
        {
            cout<<" prime for"<<i<<endl;
        }
        i=i+1;
        
    }
    return 0;
}
    