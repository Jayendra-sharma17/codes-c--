#include<iostream>
#include<vetor>
#include<algorithm>

using namespace  std;
int main()
{
    vector<vector <int> ans>;
    for (int i = 0; i < ans.size(); i++)
    {
     if(arr[i]+arr[j]==sum){
        vector<int> temp;
        temp.push_back(min(arr[i],arr[j]));
        temp.push_back(max(arr[i],arr[j]));
        ans.push_back(temp);
     }
    }
    sort(ans.begin(),ans.end());
    
return ans;
}