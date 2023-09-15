#include<iostream>
using namespace std;
int getmin(int arr[],int n)
{
    int min=INT16_MAX;
    for (int i = 0; i<=n; i++)
    {
     if (arr[i]<min)
     {
        min=arr[i];
     }
     
    }
return min;
    
    
}
int getmax(int arr[],int n)
{
    int max=INT16_MIN;
    for (int i = 0; i<=n; i++)
    {
     if (arr[i]>max)
     {
        max=arr[i];
     }
     
    }
return max;
    
    
}
int main(){
int num[5];
for (int i = 0; i < 5; i++)
{
    cin>>num[i];
}
cout<<"maximum is"<<getmax(num,5);
cout<<endl;
cout<<"minimumis"<<getmin(num,5);
return 0;

}