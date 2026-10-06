#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number :";
    cin>> n;
    switch (n)
    {
        case 1:
            cout<< "mon";
            break;
        case 2:
            cout<< "tue";
            break;
        case 3 :
            cout<< "wed";
            break;
        case 4 :
            cout<< "thur";
            break;
        case 5 :
            cout<< "fri";
        case 6 :
            cout<< "sat";
        default :
            cout<< "invalid"<<endl;
        
    }
    return 0;
}