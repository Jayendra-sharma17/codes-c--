#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool anagrm(string s1,string s2)
{
    int n1=s1.length();
    int n2=s2.length();
    if (n1!=n2)
    {
       return false;
    }
    
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());

// i hVE to cmpare two string 
for (int i = 0; i <n1; i++)
{
   if(s1[i]!=s2[i])
   {
    return false;
   }
}
return true;


}
int main()
{
    string s1="jaye";
    string s2="jayr";
    if(anagrm(s1,s2))
    {
        cout<<"anagram";
    }
    else{
        cout<<"not an anagram";
    }
    return 0;
}