#include<iostream>
using namespace std;
void reverse(char ch[],int n)
{
  int s=0;
  int e=n-1;
  while(s<=e)
  {
    swap(ch[s++],ch[e--]);
  }
}
int getlen(char ch[])
{
  int count=1;
  for (int i = 1; ch[i]!='\0'; i++)
  {
   count++;
  }
  
  return count;
}
int main()
{

char str[10];
cout<<"enter "<<endl;
cin>>str;
int x=getlen(str);
reverse(str,x);
cout<<str;
  return 0;
}