#include<iostream>
using namespace std;
// int getlen(char ch[])
// {
//     int count=1;
//     for (int i = 1; ch[i]!='\0'; i++)
//     {
//         count++;
//     }
    
//     return count;
// }
char maxocc(string s)
{
   int arr[26]={0};
//    finding the max occ character
   for (int i = 0; i <s.length(); i++)
   {
    char ch=s[i];
int num=ch-'a';
arr[num]++;
   }
//    finding the maximum index char for the value to return the maximum count of the character
int maxi=-1,ans=0;
for (int i = 0; i <26; i++)
{
 if (maxi<arr[i])
 {
   ans=i;
   maxi=arr[i];
 }
 
}
 cout<<"the index count number is"<<maxi<<endl;
 


   

    return 'a'+ans;
}

int main()

{
    string s;
    cout<<"enter the string";
    cin>>s;
    cout<<"max occ char is"<<maxocc(s)<<endl;
    return 0;
}