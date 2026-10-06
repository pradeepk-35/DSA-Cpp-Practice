#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 1;
    cout<< "Enter a no's : ";
    cin>> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= a; j++)
    //     {
    //         cout<<"* ";
            
    //     }
    //     a += 2;
    //     cout<<endl;
    // }

    for(int i = 1; i <= n; i++ )
    {
        for(int j = 1; j <= 2*i-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}