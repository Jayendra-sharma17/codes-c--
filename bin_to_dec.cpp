#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int i=0,ans=0;
    while (n!=0)
    {
      int dig=n%10;
      if (dig==1)
      {
      ans=ans+pow(2,i);
     
    }
      n=n/10;
    i++;
    }
   cout<<"answer is"<<ans;
    
    return 0;
}
