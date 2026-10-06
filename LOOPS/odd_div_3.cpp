#include <iostream>
using namespace std;
int main()
{
    int i;
    // for (i = 1; i <= 100; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         if (i % 3 == 0)
    //         {
    //             cout << i << "\t";
    //         }
    //     }
    // }

    // for(i = 1; i <= 100; i += 2)
    // {
    //     if(i % 3 == 0)
    //     {
    //         cout<<i<<"\t";
    //     }
    // }

    for(i = 1; i <= 50; i++ )
    {
        //cout<<(i * 2) - 1<<"\t";
        int n = (i * 2) - 1;
        if(n % 3 == 0) cout<<n<<"\t";
    }

    
}