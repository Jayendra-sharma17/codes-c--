#include<iostream>
using namespace std;
void sorting(string &s)
{
  int charcount[26]={0};
  for (int i = 0; i <s.length(); i++)
  {
   charcount[s[i]-'a']++;
  }
  for (int i = 0; i <26; i++)
  {
    for (int j = 0; j<charcount[i]; j++)
    {
      cout<<(char)('a'+i);
    }
    
  }
  
  
}
int main()
{
  string s;
  cin>>s;
  sorting(s);
  cout<<s;
  return 0;
}