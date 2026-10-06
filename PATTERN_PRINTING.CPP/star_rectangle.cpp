#include <iostream>
using namespace std;
int main()
{
    int m, n;
    {
        cout<<"Enter number of rows";
        cin>>m;
        cout<<"Enter number of columns";
        cin>>n;
        for(int i = 1; i <= m; i++) // for rows
        {
            for(int j =1; j <= n; j++) // for columns
            {
                cout<<"*\t";
            }
            cout<<endl;
        }

    }

}