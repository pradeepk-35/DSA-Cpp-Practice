#include <iostream>
using namespace std;
void test()
{
    //cout<<i; // this fun() cannaot access value of i as it is local to only main or like it is only accessable with in declared blocks 
}
int main()
{
    int i = 10;
    test();
    cout<<i<<" ";
}