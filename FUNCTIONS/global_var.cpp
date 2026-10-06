#include <iostream>
using namespace std;
int  i = 10; // Global variable 
void test()
{
    cout<<i<<endl; // this fun() cannaot access value of i as it is local to only main or like it is only accessable with in declared blocks 
}
int main()
{
    //int i = 10;
    test();
    i = 10;
    cout<<i<<" "<<endl;
    test();
    cout<<i<<endl;
}