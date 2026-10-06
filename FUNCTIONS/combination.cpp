#include <iostream>
using namespace std;
int fact(int n)
{
    int fct = 1;
    for (int i = 1; i <= n; i++)
    {
        fct *= i;
        // return fct;
    }
    return fct;
}
int main()
{
    int n, r;
    cout << "Enter the value on n and r : ";
    cin >> n >> r;
    int nfct = fact(n);
    int rfct = fact(r);
    int nrfct = fact(n - r);
    // cout << nfct << endl
    //      << rfct << endl
    //      << nrfct << endl;
    int nCr = nfct / (rfct * nrfct);
    //int nCr = fact(n) / (fact(r) * fact(n-r));
    cout << "The combination is " << nCr << endl;
}