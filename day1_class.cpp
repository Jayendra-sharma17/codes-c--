#include<iostream>
using namespace std;
class Hero{
private:
int a;

public:
int b;
// void getdata(int x,int y)
// {
// a=x;
// b=y;
// }
// void setdata()
// {
//     cout<<a<<b;
// }
Hero(int b )
{
   this->b=b;
cout<<this;
    cout<<"constructor is called"<<endl;
    cout<<b;
}
};
int main()
{
    Hero h(2);
    // dynamically object

    // Hero *h=new Hero(2);
    cout<<&h;
    // Hero h;
//     h->getdata(3,4);
//  h->setdata();

    

return 0;
}