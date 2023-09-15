#include<iostream>
using namespace std;
char tocheckpalin(char ch)
{
    if(ch>'a' && ch<'z')
    {
        return ch;
    }
    else{
        char temp=ch -'A'+'a';
    }
}
bool ispalindrome(char a[],int n)
{
    int s=0;
    int e=n-1;
    while (s<=e)
    {
      if (tocheckpalin(a[s])!=tocheckpalin(a[e])) {
      return 0;
      }
      else{
    s++;
    e--;
      }

      
    }
    return 1;
    
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
    char str[20];
    cout<<"enter str";
    cin>>str;
    int c=getlen(str);
  bool r=ispalindrome(str,c);
  cout<<r;
  cout<<tocheckpalin('A');
    return 0;
}