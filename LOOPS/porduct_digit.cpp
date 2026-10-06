#include <iostream>
using namespace std;
int main()
{
    int n, product, digit;
    cout<< "Enter a digits : ";
    cin>>n;
    product = 1;
    n = abs(n);
    if(n == 0) 
        product--;
    while(n != 0)
    {
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }
    cout<<"the product of the given digits is : "<<product<<endl;
}