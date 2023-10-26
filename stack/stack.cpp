#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int >s;
    cout<<"enter the el";
    s.push(2);
    s.push(4);
  
    s.pop();
      cout<<"checking top element"<<s.top();
      cout<<"size is"<<s.size();
    return 0;
}