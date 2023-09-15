  #include<iostream>
  #include<vector>
  using namespace std;
  vector<int> findArrayIntersection(vector<int> &arr1,int n, vector <int> &arr2,int m)
  {
    int n=0,m=0;
    vector<int > ans;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    return ans;

  }
  