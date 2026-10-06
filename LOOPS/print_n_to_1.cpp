#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    //for(int i = n; i >= 1 ; i--) cout<<i<<"\t";
    for(int i = 1; i <= n; i++)
   {
        cout<<n+1-i;
   }
}