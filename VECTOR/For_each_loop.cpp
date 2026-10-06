#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    for(int ele : a)
    {
        if(ele % 2 == 0)  cout<<ele * 2<<" ";
        else cout<<ele * -1<<" ";
    }
}