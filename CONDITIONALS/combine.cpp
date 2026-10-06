#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n % 5 == 0 && n % 3 == 0) cout<<"Anuj";
    else if(n % 5 == 0) cout<<"Karitkeyan";
    else if(n % 3 == 0) cout<<"Sakshi";
    else cout<<"Hitesh";
    return 0;
}