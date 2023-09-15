#include <iostream>
using namespace std;
int is_even(int a)
{
    cout << "enter a" << endl;
    cin >> a;
if (a % 2 == 0)
    {
        cout << "even" << a << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return a;

}
int main()
{
    int m;
    int out=is_even(m);
    cout<<out<<endl;
    return 0;
}