#include <iostream>
using namespace std;
// void pat1(int a)
// {
//     for(int i = 1; i <= a; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     cout<<"pattern 1 is ended"<<endl;
// }
// void pat2(int b)
// {
//     for(int i = 1; i <= b; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     cout<<"pattern 2 is ended"<<endl;
// }
// void pat3(int c)
// {
//     for(int i = 1; i <= c; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     cout<<"pattern 3 is ended"<<endl;
// }
// int main()
// {
//     int a, b, c;
//     cout<<"Enter a no for pattern 1 : ";
//     cin>>a;
//     cout<<"Enter a no for pattern 2 : ";
//     cin>>b;
//     cout<<"Enter a no for pattern 3 : ";
//     cin>>c;
//     pat1(a);
//     pat2(b);
//     pat3(c);
// }
void pat1(int x)
{
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //cout<<"pattern 1 is ended"<<endl;
}
int main()
{
    int a, b, c;
    cout<<"Enter a number : ";
    cin>>a;
    pat1(a);
    cout<<"pattern a is ended"<<endl;
    cout<<"Enter a number : ";
    cin>>b;
    pat1(b);
    cout<<"pattern b is ended"<<endl;
    cout<<"Enter  number : ";
    cin>>c;
    pat1(c);
    cout<<"pattern c is ended"<<endl;
}