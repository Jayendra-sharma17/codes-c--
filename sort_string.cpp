
#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
const int maxchar=26;
void sorting(string &s)
{
  int charcount[26]={0};
  for(int i=0;i<s.length();i++)
  {
    charcount[s[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
    for(int j=0;j<charcount[i];j++)
    {
      cout<<(char)('a'+i);
    }
  }
}
int main()
{
string str;
cout<<"enter string";
cin>>str;
cout<<str;
sorting(str);
return 0;
}