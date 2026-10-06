#include <iostream>
using namespace std;
int main()
{
    int n, digits,reverse;
    cout<<"Enter a number : ";
    cin>>n;
    reverse = 0;
    int original = n;
    while(n != 0)
    {
        digits = n % 10;
        reverse = reverse * 10 + digits;
        n /= 10;
    }
    cout<<reverse<<endl;
    if(original == reverse)
        cout<<"palindrome";
    else 
        cout<<"Not a palindrome";
}