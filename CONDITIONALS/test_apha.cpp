#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "Enter a character";
    cin >> alpha;
    if (alpha >= 'A' and alpha <= 'Z')
        cout << "It is a capital alphabet";
    else if (alpha >= 'a' and alpha <= 'z')
        cout << "It is a small alphabet";
    else
        cout << "it is not a alphabet";
    return 0;
}
