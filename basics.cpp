#include<iostream>
using namespace std;
class Emp{
public:
int i;
float salary;
string name;
void insert(int id,float sal,string n)
{
    i=id;
    salary=sal;
    name=n;
}
void display()
{
    
    cout<<"the id is"<<i<<"salary is"<<sal<<"name is "<<n<<endl;
}
};
int  main() {
    Emp e;
    e.insert(2,4.5,"jay");
    e.display();
    return 0;
}