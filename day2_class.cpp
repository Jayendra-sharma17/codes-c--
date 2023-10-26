#include<iostream>
#include<string.h>
using namespace std;

class A{
    int x, y;
public:
char *name;
// A(A& temp)
// {
// cout<<"copy constructor called"<<endl;
// this->x=x;
// this->y=y;
// }
A(){
    cout<<endl;
cout<<"default constructor is called"<<endl;
 name=new char[100];
}
void seta(int a)
{
   this->x=a;
}
void setb(int b)
{
   this->y=b;
}
A(int a,int b)
{

    this->x=a;
    this->y=b;
}
void display()
{
    cout<<endl;
    cout<<"x is"<<x<<"y is"<<y<<endl;
    cout<<"name is"<<this->name<<" ,"<<endl;
}
void setname(char name[]){
       strcpy(this->name,name);
}
~A()
{
    cout<<"destrcutor is called"<<endl;
}
};

int main()
{
    A ab;
    // dynamically destructor ko call krne ke liye hame mannualy delete krna pdta h 
    A *a=new A();
    delete a;
    // a.seta(2);
    // a.setb(3);
    // char name[9]="jayendra";
    
    // a.setname(name);
    // a.display();
//   use default copy constructor
// A b(a);
// A b=a;one more method to use copy constructor
// b.display();
// a=b;
// a.display();
// b.display();
// a.display();
    // A b(a);
    // a.display();

    return 0;
}