#include<iostream>
using namespace std;
int main() {
int n,m;
int mask=0;
int ans=0;
cout<<"enter n";
cin>>n;
m=n;
if (n==0)
{
  return 1;
}
while (m!=0)
{
  mask=(mask<<1)||1;
  m=m>>1;
}
ans=(~n) & mask;
cout<<"answer is"<<ans;



return 0;
}
