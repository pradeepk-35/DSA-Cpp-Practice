#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % 2 != 0)
            {
                cout<<j<<"\t";
            }
            else
            {
                cout<<char('A' + (j - 1))<<"\t";
            }
        }
        cout<<endl;
    }
}