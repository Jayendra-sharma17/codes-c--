// #include<iostream>
// using namespace  std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//    int row=1;
//    while (row<=n)
//    {
//     //printing space 
  
//    int space =n-row;
//     while (space )
 
//     {
//         cout<<" ";
//         space --;
//         /* code */
//     }
//     int col=1;
//     //printing stars
//     while (col<=row)
//     {
//        cout<<"*"<<" ";
//        col++;
//     }
//     cout<<endl;
//     row++;

    
//    }
   
    
//     return 0;
// }

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
// int n;
// cout<<"enter n";
// cin>>n;

// int row=1;
// while(row<=n)
// {
//     int space =n-row;
//     while(space)
//     {
//         cout<<" ";
//         space--;
//     }
//     int col=1;
//     while(col<=row)
//     {
//         cout<<"*"<<" ";
//         col++;
        
//     }

//     cout<<endl;
//         row++;
// }


//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}