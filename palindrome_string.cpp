#include<iostream>
using namespace std;
char tolowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool ispalindrome(char ch[],int n)
{
int s=0;
int e=n-1;
while(s<=e)
{
    if (tolowercase(ch[s])!=tolowercase(ch[e]))
    {
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
    int count=0;
    for (int i = 0; ch[i]!='\0'; i++)
    {count++;

    }
    
    return count;
}
int main()
{
    char str[10];
    cout<<"enter name";
    cin>>str;

  int x=getlen(str);
    cout<<ispalindrome(str,x)<<endl;
cout<<"lower case is"<<tolowercase('c')<<endl;
cout<<"upper case is"<<tolowercase('A');

    return 0;
}