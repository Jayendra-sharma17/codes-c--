#include<iostream>
using namespace std;
int linear(int arr[],int n,int key)
{
    for (int  i = 0; i <=n; i++)
    {
     if (arr[i]==key)
     {
        // index=i;
       return i+1;
     }
     

    }
    return -1;
    
}
int main()
{
    int num[4]={12,426,63,554};
    int key;
  
    // for ( int i = 0; i < 4; i++)
    // {
    //     cout<<"enter the elemnets"<<endl;
    //     cin>>num[i];
    // }
    cout<<"enter the key"<<endl;
    cin>>key; 
int n=4;
   int found=linear(num,4,key);
   for (int i =0; i <=n; i++)
   {
   cout<<"values are"<<num[i]<<endl;
   }
   
    if (found==-1)
    {
      cout<<"not found"<<endl;
    }
    else{
        cout<<" found "<<" "<<key<<"  "<<"at location"<<found<<endl;
    }
    
    return 0;
}