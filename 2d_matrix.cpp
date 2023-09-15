#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int row ,int col,int loc)
{
for (int row = 0; row < 3; row++)
{
 for (int col = 0; col < 4; col++)
 {
   if (arr[row][col]==target)
   {
//    cout<<"value is present"<<endl;
   return 1;
   }
 }
 }
 return 0;
 

}
void sumrow(int arr[][4],int row ,int col)
{
    for (int row = 0; row < 3; row++)
    {
       int sum=0;
        for (int col = 0; col<4; col++)
        {
          sum+=arr[row][col];
        }
        cout<<sum<<endl;
        /* code */
    }
    
}


int largetsumrow(int arr[][4],int row ,int col){
int maxi=INT32_MIN;
int rowindex=-1;
for (int row = 0; row <3; row++)
{
    int sum=0;
    for (int col = 0; col < 4; col++)
    {
        sum+=arr[row][col];
    }
    if (sum>maxi)
    {
        maxi=sum;
        rowindex=row;
    }

    
}
    cout<<"maximum sum of index"<<rowindex<<"  "<<"is"<<maxi<<endl;

return rowindex;

}

int main()
{
    int locc=0;
    int num[3][4] ,target;
  
    for (int i = 0; i <3; i++)
    {
    for (int j = 0; j<4; j++)
    {

       cin>>num[i][j];
    }
  
    }
      for (int i = 0; i <3; i++)
    {
    for (int j = 0; j<4; j++)
    {
    locc++;
       cout<<num[i][j]<<" ";
 
    }
    cout<<endl;
    
    }

      cout<<"enter the number"<<endl;
    cin>>target;
    if (ispresent(num,target,3,4,locc))
    {
 cout<<"value is present"<<target<<"at"<<locc<<endl;
    }
    
    else{
        cout<<"not found"<<endl;
    }
    
sumrow(num,3,4);
  int ch= largetsumrow(num,3,4);
  cout<<"maximum index of sum is"<<ch<<endl;
    
    return 0;
}