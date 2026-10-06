#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i % 2 != 0)
                {
                    cout<<char('a' + (i - 1))<<"\t";
                }
                else
                {
                    cout<<char('A' + (i - 1))<<"\t";
                }
            }
            cout<<endl;
        }
    
}