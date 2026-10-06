#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, r;
    cout<<"Enter a values of n and r  : ";
    cin>>n>>r;
    int nPr = fact(n) / (fact(n - r));
    cout<<"The no of permutations are "<<nPr<<endl;
}