#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],r,c,i,j,k,mul[10][10];
    cout<<"Enter the number of rows and columns: ";cin>>r>>c;
    cin>>r>>c;
    cout<<"enter first matrix";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; i < c; j++)
        {
           cin>>a[i][j];
        }
        
    }

    cout<<"enter second matrix";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; i < c; j++)
        {
           cin>>b[i][j];
        }
        
    }
    


cout<<"multiply matrix";
for (int i = 0; i < r; i++)
{
for (int j = 0; j < c; j++)
{
  mul[i][j]=0;
  for (int k = 0; k <c; k++)
  {
   mul[i][j]+=a[i][k]*b[k][j];
  }
  
}

}
for ( i = 0; i <r; i++)
{
   for (j  = 0; j <c; j++)
   {
cout<<"multiply is"<<mul[i][j];
   }
   
}
return 0;
}
