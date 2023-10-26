#include<iostream>
#include<stack>
using namespace std;
void revsere(stack<int>&stack)
{
    if (stack.empty())
    {
       return;
    }
    int num=stack.top();
    stack.pop();
    revsere(stack);
}
int main()
{
    int arr[5];
    int stack;
    cin>>stack;
   
    for (int i = 0; i <=stack; i++)
    {
       cin>>arr[i];
     
    }
   

  
   
   revsere(arr);
    

    return 0;
}