#include<iostream>
using namespace std;
class Stack{
public:
int size;
int *arr;
int top;
Stack(int size)
{
    this->size=size;
    arr=new int[size];
    top=-1;
}
void push(int ele)
{
if (size-top>1)
{
    top++;
    arr[top]=ele;
}
else{
    cout<<"stack overflow we cant push"<<endl;
}
}

void pop()
{
if(top>=0)
{
    top--;
}
else{
    cout<<"stack underflow we pop"<<endl;
    
}
}
int peek()
{
if (top>=0)
{
    return arr[top];
}
else{
    cout<<"stack is empty"<<endl;
    return -1;
}

}
bool empty()
{
if (top==-1)
{
   return true;
}
else{
    return false;
}

}

};
int main()
{
    Stack s(5);
    s.push(4);
    s.push(5);
    s.push(7);
    s.push(9);
    s.push(10);
    cout<<"checking the array is empty of array"<<s.empty();
    cout<<endl;
    cout<<endl;
   s.pop();
   

    cout<<"checkig top ele"<<s.peek()<<endl;

    return 0;
}