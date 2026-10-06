#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float cp, sp, result;
    cout << "Enter the cost price : ";
    cin >> cp;
    cout << "Enter the selling price : ";
    cin >> sp;
    if (sp > cp)
        cout << "Profit";
    else if (sp < cp)
        cout << "Loss";
    else
        cout << "No Loss / no Profit";
    result = sp - cp;
    if (result > 0)
        cout << "\nprofit money is : " << abs(result);
    else if (result < 0)
        cout << "\nloss money is : " << abs(result);
    else
        cout << "\nbhai sab kismath accha hai !! aaj loss tho  nahi hua !! mera paisa tho mera pasa hi hai... ";

    return 0;
}