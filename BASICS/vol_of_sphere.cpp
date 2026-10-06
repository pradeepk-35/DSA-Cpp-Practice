// #include <iostream>
// using namespace std;
// int main()
// {
//     float r;
//     cout << "Enter the radius :";
//     cin >> r;
//     float vol = (4.0 / 3.0) * 3.141592 * r * r * r;
//     cout << "vol of sphere : " << vol;
//     return 0;
// }
// using cmath lib
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r;
    const float pi = 3.141592;
    cout << "Enter the value of the radius : ";
    cin >> r;
    float vol = (4.0/ 3.0) * pi * pow(r, 3);
    cout << "the vol of the sphere : " << vol;
    return 0;
}