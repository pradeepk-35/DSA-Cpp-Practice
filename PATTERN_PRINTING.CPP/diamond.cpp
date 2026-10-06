#include <iostream>
using namespace std;
int main()
{
    // method 1
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // int nsp = n - 1;
    // int nst = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= nsp; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= nst; j++)
    //     {
    //         cout << "* ";
    //     }
    //     nsp--;
    //     nst += 2;
    //     cout << endl;
    // }
    // n = n - 1;
    // int nsp1 = 1, nst1 = 2 * n - 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= nsp1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= nst1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     nsp1++;
    //     nst1 -= 2;
    //     cout << endl;
    // }

    // method 2
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nsp = n - 1, nst = 1;
    for(int i = 1; i <= 2 * n - 1; i++)
    {
        for(int j = 1; j <= nsp; j++ )
        {
            cout<<"  ";
        }
        for(int j = 1; j <= nst; j++)
        {
            cout<<"* ";
        }
        if(i < n)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        cout<<endl;
    }
    
}