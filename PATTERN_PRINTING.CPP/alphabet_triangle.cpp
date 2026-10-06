#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<(char)('A' + (j - 1))<<"\t";
        }
        cout<<endl;
    }
}