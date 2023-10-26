#include<iostream>
using namespace std;
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
    cout<<"enter string";
    cin>>str;
    int x=getlen(str);
    cout<<x;
    return 0;
}