#include <iostream>
using namespace std;
int main()
{
    int i, a, n, d, an;
    cout<<"Enter a number of terms :";
    cin>>n;
    // a = 2;
    // d = 3;
    // cout << "enter the value of n";
    // cin >> n;
    // an = a + (n - 1) * d;
    // for (i = a; i <= an; i += d)
    //     cout << i << "\t";

    //using an extra variable 
    a = 2;
    for(i = 1; i <= n; i++)
    {
        cout<<a<<"\t";
        a += 3;
    }

}