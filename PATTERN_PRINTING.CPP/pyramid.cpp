#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number : ";
    cin>> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= (n + 1 ) - i; j++ )
    //     {
    //         cout<<"  ";
    //     }
    //     for(int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    int nsp = n-1;
    int nst = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= nsp; j++)
        {
            cout<<"  ";
        }
        for(int j = 1; j <= nst; j++)
        {
            cout<<"* ";
        }
        nsp -= 1;
        nst += 2;
        cout<<endl;
    }
}