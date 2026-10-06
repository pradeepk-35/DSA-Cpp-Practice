#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    // if(n % 2 == 0 && n % 3 == 0)
    // {
    //     cout<<"we got the number ";
    // }
    // else
    // {
    //     cout<<"this is not the expected number ";
    // }
    // return 0;
    if(n % 2 == 0)
    {
        if(n % 3 == 0)
        {
            cout<<"we got the number ";
        }
    }
    else
    {
        cout<<"we lost a number ";
    }
    


}