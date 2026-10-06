#include <iostream>
using namespace std;
int main()
{
    float l, b;
    cout<< "Enter the length of the rectangle";
    cin>> l;
    cout<< "Enter the breadth of the rectangle";
    cin>> b;
    float p = 2.0*(l+b);
    float a = l*b;
    if(a > p) 
        cout<<"area is greater"<<endl;
    else if(a == p)
        cout<<"Congratulations bhai!!! your's both area and perimeter are same ";// i will keep it professional as gpt suggested but wrote just for fun 
    else
        cout<<"perimeter is greater";
}