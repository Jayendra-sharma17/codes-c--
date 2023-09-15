#include<iostream>
using namespace std;
void count(int n){
    for (int i = 1; i<=n; i++)
    {
      cout<<i<<endl;
    }
    cout<<endl;

    
}
int main()
{
    int a;
    cin>>a;
   count(a);
    // cout<<count(a)<<endl;
    return 0;
}