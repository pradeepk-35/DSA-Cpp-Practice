#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(10);
    a.push_back(11);
    a.push_back(12);
    a.push_back(13);
    a.push_back(14);
    a.push_back(15);
    a.push_back(16);
    a.push_back(17);
    a.push_back(19);
    a.push_back(20);
    a.push_back(1);
    //int c = a.capacity();
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    for(int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<"  ";
    }
}  