#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
//     int n1=a.size();
//     int n2=b.size();
//     set<int> st;
//     for(int i=0;i<n1;i++)
//     {
// st.insert(a[i]);
//     }
//     for(int i=0;i<n2;i++)
//     {
//         st.insert(b[i]);
//     }
//     vector<int> temp;
//     for(auto it:st)
//     {
//         temp.push_back(it);
//     }
//     return temp;
int n1=a.size();
int n2=b.size();
int i=0,j=0;
vector<int>sortedarr;
while(i<n1 &&j<n2)
{
if(a[i]<b[j])
{
    if(sortedarr.size()==0||sortedarr.back()!=a[i])
    {
        sortedarr.push_back(a[i]);
    }
    i++;
}
else{
    if(sortedarr.size()==0||sortedarr.back()!=b[j])
    {
        sortedarr.push_back(b[j]);
    }
    j++;
}

}
while(j<n2)
{
     if(sortedarr.size()==0||sortedarr.back()!=b[j])
    {
        sortedarr.push_back(b[j]);
    }
    j++;
}
while(i<n1)
{
     if(sortedarr.size()==0||sortedarr.back()!=a[i])
    {
        sortedarr.push_back(a[i]);
    }
    i++;
}
return sortedarr;
}