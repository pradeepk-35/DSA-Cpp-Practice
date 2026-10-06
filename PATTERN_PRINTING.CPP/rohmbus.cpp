#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout<< "Enter  a no  : ";
    cin>> n;
    // cout<< "Enter no of rows : ";
    // cin>> m;
    // cout<< "Enter no of rows : ";
    // cin>> m;
    // for(int i = 1; i <= m; i++)
    // {
    //     for(int j = 1; j <= n; j++)
    //     {
    //         if(i + j > m || i + j > n)
    //         {
    //             cout<<"* ";
    //             break;
    //         }
    //         else
    //         {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    for(int i = 1; i <= n; i++)
    {
        for(int j = n ; j >= i; j--)
        {
            cout<<"  ";
        }
        for(int k = 1 ; k <= n; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}