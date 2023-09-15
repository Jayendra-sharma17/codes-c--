#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *ptr=&num;
    cout<<"value is"<<num<<endl;
        cout<<"address of num is"<<&num<<endl;
    cout<<"address is"<<ptr<<endl;
    cout<<"value of ptr is"<<*ptr<<endl;
        cout<<"address value of ptr is"<<&ptr<<endl;

cout<<"size of num is"<<sizeof(num)<<endl;
cout<<"size of ptr is"<<sizeof(ptr)<<endl;

int i=3;
int *t=&i;
*t=*t+1;
cout<<*t<<endl;
cout<<endl<<" "<<endl;
t=t+1;
cout<<"what is will print see"<<t<<endl;
    return 0;
}