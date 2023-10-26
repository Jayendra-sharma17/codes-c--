#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<"before reversing"<<str<<endl;
    stack<int> s;
    for (int i = 0; i <=str.length(); i++)
    {
      char ch=str[i];
      s.push(ch);
    }
    string ans=" ";
    while (!s.empty())
    {
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"answer after reversing";
    cout<<ans;
    return 0;
}
