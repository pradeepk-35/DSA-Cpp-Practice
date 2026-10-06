#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5};
    //cout<<a[0]<<endl<<a.size()<<endl<<a.capacity();
    for(int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<"  ";
    }
}