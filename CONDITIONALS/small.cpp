#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"Enter a alphabet :";
    cin>>alpha;
    if(alpha >= 97 && alpha <= 122)
        cout<<"its is a small aphabet";
    else 
        cout<<"it is not a small aplhabet";
    return 0;
}
