#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for(int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int ncr(int n , int r)
{
    int nCr = fact(n) / (fact(r) * fact(n - r));
    return nCr;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i  = 0; i <= n; i++)
    {
        for(int j = 0; j <= n + 1 - i; j++ )
        {
            cout<<"  ";
        }
        for(int j = 0; j <= i; j++)
        {
            cout<<ncr(i, j)<<"  ";
        }
        cout<<endl;
    
    }
    
        
    
}