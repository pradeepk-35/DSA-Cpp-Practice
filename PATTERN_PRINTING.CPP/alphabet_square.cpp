#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1 ; j <= n; j++)
    //     {
    //        cout<<char(j+64)<<"\t";

    //     }
    //     cout<<endl;
    // }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cout<< char('A' + (j - 1))<< "\t";
        }
        cout<<endl;
    }

    
}