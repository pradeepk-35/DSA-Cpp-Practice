#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout<<"Enter the no of rows and colmuns";
    cin>>m>>n;
    for(int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
           if(i == 1 || i == m || j == 1 || j == n)
           {
            cout<<"*\t";
           }
           else 
           {
            cout<<"\t";
           }
        }
        cout<<endl;
    }
}