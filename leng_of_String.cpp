#include<iostream>
using namespace std;
int getle(char ch[])
{
    int count=0;
    for (int i = 0; ch[i] !='\0'; i++)
    {
     count++;
    }
    return count;
    
}
int main()
{
    char str[20];
    cout<<"enter "<<endl;
    cin>>str;
    cout<<"len is"<<getle(str);
    return 0;
}