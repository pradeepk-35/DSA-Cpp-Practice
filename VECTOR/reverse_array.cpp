#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2,4,6,8,10};
    int n = v.size();
    int i = 0, j = n - 1;

    while(i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    cout<<"Reversed array : ";
    for(int ele : v)
    {
        cout<<ele<<"  ";
    }
}