#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter a number :";
    cin >> n;
    for (i = 1; i <= 10; i++)
        cout << i * n << "\t";

    // for(i = 19; i <= 190; i += 19) cout<<i<<"\t";

    // for(i = 1; i <= 190; i++)
    // {
    //     if(i %  19 == 0) cout<<i<<"\t";
    // }
}