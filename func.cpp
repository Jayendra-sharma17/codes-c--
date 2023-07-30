#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
   
}
int main()
{
    int x,y;
    cout<<"enter  x and y";
    cin>>x>>y;
    cout<<"the swapping number is";
    swap(x,y);
    cout<<"swappung"<<x<<y<<endl;

    return 0;
}
