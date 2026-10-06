#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number : ";
    cin>> n;
    int a = 1;

    for(int i = 1; i <=n; i++)
    {
        for(int j = 1; j <=n; j++)
        {
            if(i + j > n)
            {
                
                cout<<j-(n-i)<<" ";
                
                
            }
            else
            {
                cout<<". ";
            }
           
        }
        cout<<endl;
    }

    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = n ; j >= i; j--)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int k = 1; k <= i; k++)
    //     {
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }
}