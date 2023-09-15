#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int ans=0;
    while (n!=0)
    {
          int digit=n%10;
    if ((ans>INT16_MIN/10) || (ans<INT16_MAX))
    {
       return 0; 
    }
  else{
ans=(ans*10)+digit;
    n=n/10;

  }
    

    }
            cout<<"answer is"<<ans<<endl;

    return 0;
}